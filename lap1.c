#include<stdio.h>
int main() {
	int myNum1;
	printf("Type a number and press enter: \n"); 
	scanf("%d", &myNum1);
	int myNum2;
	printf("Type a number and press enter: \n");
	scanf("%d", &myNum2); 
	if (myNum1>myNum2) {
		printf("num1 greater then num2");
	} else {
		printf("num2 greater then num1");
	}
}
