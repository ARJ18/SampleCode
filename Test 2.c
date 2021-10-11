#include<stdio.h>
#include<math.h>

int main()
{


double num1,num2,result;
char op;
printf("\nEnter the operation ");
scanf("%c",&op);
printf("Enter the first number ");
scanf("%lf",&num1);
printf("\nEnter the second number ");
scanf("%lf",&num2);

switch(op)
{
case '+' : result = num1 + num2;
           printf("%lf",result);
           break;
case '-' : result = num1 - num2;
           printf("%lf",result);
           break;
case '*' : result = num1 * num2;
           printf("%lf",result);
           break;
case '/' : result = num1 / num2;
           printf("%lf",result);
           break;
default  : printf("Invalid operator");
}

return 0;
}