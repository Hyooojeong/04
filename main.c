#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input the second : ");
	scanf("%i", &x);
	
	printf("The time for %i is %i : %i : %i \n", x, x / 3600, (x % 3600) / 60, x % 60 );
	
	return 0;
}
