#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,x;
printf("\nenter the values of a b and c\n ");
scanf("%f%f%f",&a,&b,&c);
x=(pow(b,2)-4*a*c);
if(x==0)
{
printf("\nthe roots of equation are equal\n");
d=(-1*b)/(2*a);
printf(" the root is %f",d);
}
else if(x>0)
{
printf("\nthe roots are real and distinct\n");
d=((-1*b)-sqrt(x))/(2*a);
e=((-1*b)+sqrt(x))/(2*a);
printf("\nthe roots are %f and %f\n",d,e);
}
else
printf(" \nthe roots are imaginary\n");
return 0;

}
