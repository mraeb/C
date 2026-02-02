#include <stdio.h>

int main(){
	int a;
	int b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter scond number: ");
	scanf("%d", &b);
	printf("b: %d\n", b);
	printf("a: %d\n",a);
	int sum = a+b;
	printf("The sum of two given numbers is: %d", sum);
}
