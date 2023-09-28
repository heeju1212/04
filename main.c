#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	printf("input seconds :");
	scanf("%i",&a);
	
	printf("The time for %i seconds is %i : %i : %i\n",a,a/3600,(a%3600)/60,(a%3600)%60);
	
	system("PAUSE");
	return 0;
}
