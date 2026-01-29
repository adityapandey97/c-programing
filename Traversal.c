#include<stdio.h>
#include<conio.h>
struct node
{
	struct node * left;
	int info;
	struct node * right;
};
typedef struct node * np;
np root=NULL;
int count=0;
np create();
void insert(np,np);
void inorder(np);
void preorder(np);
void postorder(np);
int countnodes(np);
void countLeafnodes(np);
int countheight(np);
void main()
{
	int ch,v,c,h;
	np t;
	clrscr();
	do
	{
		printf("\nEnter choice\n");
		printf("\n1.Insertion");
		printf("\n2.Inorder Traversal");
		printf("\n3.Preorder Traversal");
		printf("\n4.Postorder Traversal");
		printf("\n5.Count Nodes");
		printf("\n6.Leaf nodes");
		printf("\n7.Height of the tree");
		printf("\n8.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: t=create();
			if(root==NULL)
				root=t;
			else
				insert(root,t);
			break;
		case 2: inorder(root);
			break;
		case 3: preorder(root);
			break;
		case 4: postorder(root);
			break;
		case 5: c=countnodes(root);
			printf("\nnumber of nodes=%d",c);
			break;
		case 6: count=0;
			countLeafnodes(root);
			printf("\nNumber of Leaf nodes=%d",count);					break;
		case 7: if(root==NULL)
				printf("\nEmpty Tree");
			else
			{
				h=countheight(root);
				printf("\nHeight of tree=%d",h-1);
			}
			break;
		case 8: exit(1);
		default:printf("\nPLZ enter the valid choice!");
		}
	}while(1);
}
np create()
{
	np p;
	p=(np)malloc(sizeof(struct node));
	p->left=p->right=NULL;
	printf("\nEnter data ");
	scanf("%d",&p->info);
	return p;
}
void insert(np r,np t)
{
	char ch;
	printf("\nWhere do want to insert left/right of %d",r->info);
	fflush(stdin);
	ch=getchar();
	if(ch=='R'||ch=='r')
	{
		if(r->right == NULL)
			r->right=t;
		else
			insert(r->right,t);
	}
	else
	{
		if(r->left==NULL)
			r->left=t;
		else
			insert(r->left,t);
	}
}
int countnodes(np r)
{
  //	int c=1;
	if(r==NULL)
		return 0;
    //	c=c+countnodes(r->left);
   //	c=c+countnodes(r->right);
	return countnodes(r->left)+countnodes(r->right)+1;
}
void countLeafnodes(np r)
{

	if(r==NULL)
		return;
	if(r->left==NULL&&r->right==NULL)
		count++;
	countLeafnodes(r->left);
	countLeafnodes(r->right);
}

int countheight(np r)
{
	int lh,rh;
	if(r==NULL)
		return 0;
	lh=countheight(r->left);
	rh=countheight(r->right);
	if(lh>rh)
		return lh+1;
	else
		return rh+1;
}
void inorder(np r)
{
	if(r==NULL)
		return;
	if(r!=NULL)
	{
		inorder(r->left);
		printf("%d ",r->info);
		inorder(r->right);
	}
}
void preorder(np r)
{
	if(r==NULL)
		return;
	if(r!=NULL)
	{
		printf("%d ",r->info);
		preorder(r->left);
		preorder(r->right);
	}
}
void postorder(np r)
{
	if(r==NULL)
		return;
	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("%d ",r->info);
	}
}


