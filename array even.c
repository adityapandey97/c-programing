#include <stdio.h>
void main(){
    printf("enter the number;");
    int n,a=0;
    scanf("%d",&n);
    int arr [n];
   for (int i = 0; i < n; i++)
   {printf("value of arr:");
    scanf("%d",&arr[i]);
   }
    printf("even is:");
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            printf("%d  ",arr[i]);
        }
    }
}
