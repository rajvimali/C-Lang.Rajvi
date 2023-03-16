#include<stdio.h>
void main(){
	//Nested While Loop:--
	int a=0;
	clrscr();
	while(a<10){
		int b=0;
		while(b<a){
			b++;
			printf("* ");
		}
		a++;
		printf("\n");
	}
	getch();
}
