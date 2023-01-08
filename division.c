#include<stdio.h>

int main(){
	float num1,num2,sum=0.0;
	printf("enter the first number \n");
	scanf("%f",&num1);
	printf("enter the second number \n");
	scanf("%f",&num2);
	
	sum=num1/num2;
	printf("the division of two numbers  is %.2f",sum);
	
}