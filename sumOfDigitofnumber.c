#include <stdio.h>

void main() {
    printf("enter the number for sum;");
    int n;
    scanf("%d",&n);
    int sum=0;
    int r;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
       
    } printf("%d \n",sum);
}
