#include<stdio.h>
int main(){
	float Principle, Time, Rate, SI;
	printf("\nEnter Principle of Amount: ");
	scanf("%f", &Principle);
	printf("\nEnter Time: ");
	scanf("%f", &Time);
	printf("\nEnter Rate: ");
	scanf("%f", &Rate);
	SI = (Principle * Time * Rate)/100.0;
	printf("Simple Interest: %f", SI);
	return 0;
}
