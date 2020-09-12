#include<stdio.h>

int factorial(int number) {
	for (int i = number; i > 1; i--) {
		factorial *= i;
	}
	return factorial;
}

void main() {

	printf("The factorial is %d\n", factorial(5));

}