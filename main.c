#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("input the year : ");
	scanf("%i", &a);
	
	int result = 0;
	
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0) ) {
		result = 1;
	}
	
	printf("is the year %i the leap year? : %i\n", a, result);
	
	
	return 0;
}
