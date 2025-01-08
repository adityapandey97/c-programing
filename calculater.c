#include <stdio.h>

int main() {
    printf("for area of squar press 1:\n");
    printf("for area of triangle press 2:\n");
    printf("for area of circle press 3:\n");
    printf("for area of rectangle press 4:\n");
    float a,b,r,s,area;
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:printf("enter the value of a and b for area:");
                scanf("%f%f",&a,&b);
                area=a*b;
                printf("area of squar: %f \n",area);
                break;
                 case 2:printf("enter the value of a and s for area:");
                scanf("%f%f",&a,&s);
                area=0.5*a*s;
                printf("area of triangle: %f \n",area);
                break;
                 case 3:printf("enter the value of r for area:");
                scanf("%f",&r);
                area=3.14*r*r;
                printf("area of circle: %f \n",area);
                break;
                 case 4:printf("enter the value of a and b for area:");
                scanf("%f%f",&a,&b);
                area=a*b;
                printf("area of rectangle: %f \n",area);
                break;
             }
    return 0;
}
