#include<stdio.h>
void main(){
	//Simple Intrest:-
	float p,r,n,i;
	clrscr();
	printf("Enter The Amount of P :");
	scanf("%f", &p);
	printf("Enter The Amount of R :");
	scanf("%f", &r);
	printf("Enter The Amount of N :");
	scanf("%f", &n);
	i=(p*r*n)/100;
	printf("Simple Intrest = %.2f",i);

	getch();
}