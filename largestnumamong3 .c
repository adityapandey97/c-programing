#include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,c;
 printf("Enter three Numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c){
 printf("%d is largest",a);
 }else if(b>a && b>c){
 printf("%d is largest",b);
 }else{
 printf("%d is largest",c); 
 }
 }