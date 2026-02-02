#include <stdio.h>
int main(){
	//int i;
	int sum = 0;
	for (int i = 1; i<11; i++){
		printf("%d\n",i);
		sum+=i;
	}
	printf("The sum of the numbers: %d\n", sum);
}
