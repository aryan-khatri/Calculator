#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a,b,choice;
char username[20];
char pass[20];
clrscr();
printf("\t\t\t***************************\n");
printf("\t\t\t\tCALCULATOR\n");
printf("\t\t\t***************************\n");

printf("\nFor login authentication\n");
printf("***************************\n");
printf("Enter User Name:-");
scanf("%s",username);
printf("Enter your password:-");
scanf("%s",pass);
if(strcmp(username,"aryan_khatri")==0 && strcmp(pass,"aryan")==0)
{
printf("\nAccess Granted\n");
printf("***************************\n");
printf("WELL COME ARYAN\n");
printf("***************************\n");
printf("Select which one you want:\n");
printf("***************************\n");
printf("1 is for addition\n");
printf("2 is for substraction\n");
printf("3 is for multiply\n");
printf("4 is for divide\n");
printf("***************************\n");
printf("Enter the opration:");
scanf("%d",&choice);
printf("***************************\n");
printf("Enter the value for a:");
scanf("%d",&a);
printf("Enter the value for b:");
scanf("%d",&b);
printf("***************************");
switch(choice)
{
case 1:
printf("\nSum of two numbers:%d",a+b);
break;
case 2:
printf("\nSubstraction of two numbers:%d",a-b);
break;
case 3:
printf("\nMultiply of two numbers:%d",a*b);
break;
case 4:
printf("\nDivison of two numbers:%d",a/b);
break;
//default dose'nt match any case:-
default:
printf("\nWrong input selected");
printf("\n***************************");
break;
}
}
else
{
printf("***************************\n");
printf("Incorect Login Details\n");
printf("Try-Again\n");
printf("***************************");
}
getch();
}
