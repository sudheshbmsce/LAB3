#include<stdio.h>
#include<conio.h>
void character(char);
int main()
{
char ch;
printf("enter the character\n");
scanf("%c",&ch);
character(ch);
return 0;
}
void character(char ch)
{


switch (ch)
{
case 'a':printf("entered character is a vowel");
         break;
case 'A':printf("entered character is a vowel");
         break;
case 'e':printf("entered character is a vowel");
          break;
case 'E':printf("enetered character is a vowel");
         break;
case 'i':printf("enetered character is a vowel");
         break;
case 'I':printf("enetered character is a vowel");
          break;
case 'o':printf("enetered character is a vowel");
           break;
case 'O':printf("enetered character is a vowel");
          break;
case 'u':printf("enetered character is a vowel");
          break;
case 'U':printf("enetered character is a vowel");
         break;
 default  : if((ch>'a'&&ch<='z')||(ch>'A'&&ch<'Z'))
           {


    printf("enetered character is a consonant");}
      else if(isdigit(ch))
       {
        printf("entered character is a digit");
}
else

        printf("entered character is not an alphabet ");
     }

}
