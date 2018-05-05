#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	scanf("%d",&x);
	if(x>=90) printf("\'A\'\n");
	else if(x>=80) printf("\'B\'\n");
	else if(x>=70) printf("\'C\'\n");
	else if(x>=60) printf("\'D\'\n");
	else printf("\'E\'\n");
	return 0;
}
