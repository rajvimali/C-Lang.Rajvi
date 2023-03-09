#include<stdio.h>
void main(){
	//Ladder if:
	int marks;
	clrscr();
	printf("Enter Your Marks: ");
	scanf("%d",&marks);
	if(marks<=100 && marks>=90){
		printf("Your Grade is A");
	}else if(marks<90 && marks>=70){
		printf("Your Grade is B");
	}else if(marks<70 && marks>=50){
		printf("Your Grade is C");
	}else if(marks<50 && marks>=35){
		printf("Your Grade is D");
	}else if(marks<35 && marks>=0){
		printf("You are Fail....");
	}else{
		printf("Enter The Valid Marks:");
	}
	getch();

}