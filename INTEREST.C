#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double principle,rate,time,amount,CI;
printf("enter principle amount:\n");
scanf("%lf",&principle);
printf("enter rate of interest:\n");
scanf("%lf",&rate);
printf("enter time duration:\n");
scanf("%lf",&time);
amount=principle*(pow((1+rate/100),time));
CI=amount -principle;
printf("the compound interest is %lf",CI);
getch();
return 0;
}
