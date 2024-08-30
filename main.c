#include<stdio.h>

int main()
{

char operatorn;
double first, second;
printf("Enter the operator(+,-,*,/): ");
scanf("%c", &operatorn);

printf("Enter the two numbers one by one: ");
scanf("%lf %lf", &first, &second);

switch(operatorn)
{
case '+':
printf("%.2lf + %.2lf = %.2lf", first, second,(first+second));
break;
case '-':
printf("%.2lf + %.2lf = %.2lf", first, second,(first-second));
break;
case '*':
printf("%.2lf + %.2lf = %.2lf", first, second,(first*second));
break;
case '/':
if(second!=0.0)
printf("%.2lf + %.2lf = %.2lf", first, second,(first/second));
else
printf("Divide by Zero situation");
break;

default:
printf("Invalid Operator ");


}

return 0;
}
