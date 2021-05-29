#include<stdio.h>
#include<conio.h>
void small(int,int,int);
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%2d%2d",&a,&b,&c);
small(a,b,c);
return 0;
}
void small(int a,int b,int c)
{


if(a>b)
{if(b>c)
printf("%d is the smallest number",c);
else
printf("%d is the smallest number",b);
}
else if(a>c)
printf("%d is the smallest number",c);
else printf("%d is the smallest number",a);
return 0;
}
