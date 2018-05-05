#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,num=0,i,a,b,c,d,e; 
	printf("请输入一个不多于5位的正整数:");
	scanf("%d",&n);
	a=n/10000,b=(n%10000)/1000,c=(n%1000)/100,d=(n%100)/10,e=n%10;
	printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
	for(n;n!=0;n/=10)
    printf("%d",n%10);
    printf("\n");
	for(i=0;n;i++)
	n=n/10;
    num=i;
    printf("num=%d\n",num);
  
    
    return 0;
}
