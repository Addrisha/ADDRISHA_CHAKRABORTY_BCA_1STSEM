#include<stdio.h>
int main(){
	double rupee;
	printf("enter the amount in rupee: ");
	scanf("%lf",&rupee);
	printf("amount in dollars:%lf\n",rupee*0.0121);
	printf("amount in euro:%lf\n",rupee*0.0112);
	printf("amount in rubal:%lf\n",rupee*1.7719);
	printf("amount in yan:%lf\n",rupee*1.15);
}
