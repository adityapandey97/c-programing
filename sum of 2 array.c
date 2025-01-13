#include <stdio.h>
int main (){
    int n,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    int a[n];
    int b[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
     for (i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

     for (i = 0; i<n; i++)
    {
         b[i]=arr[i]+a[i];
        printf("%d  ",b[i]);
    }
}
