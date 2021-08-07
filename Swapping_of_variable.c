#include<stdio.h>  //pre-processor directive
int main(){ //main function.
	int a,b,c; //intializing of variables
	//input and output begin here
	printf("Enter First variable:");
	scanf("%d",&a);//scan user input for first variable
	printf("Enter Second variable:");
	scanf("%d",&b);//scan user input for second variable
	printf("variable before swapping a=%d,b=%d\n",a,b);
	//logic start here
	c=a;//copying a to c
	a=b;//copying b to a
	b=c;//copying c to b
	
	//output
	printf("Swapped variable are a=%d, b=%d",a,b);
	return 0;
}
