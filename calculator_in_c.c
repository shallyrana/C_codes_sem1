#include <stdio.h>
int main() 
{
 char op;
 double num1, num2;
 printf("Enter an operator (+, -, *, /): ");
 scanf("%c", &op);
 printf("Enter two operands: ");
switch (op)
{
 case '+':
 printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
 break;
 case '-':
 printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
 break;
 case '*':
 printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
 break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
 break;
 default:
 printf("Error! operator is not correct");
 }
 return 0;
}







