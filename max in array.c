#include <stdio.h>
int main (){
    int n,i,max;
    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    for(i = 1; i <n; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max number is %d",max);

}
