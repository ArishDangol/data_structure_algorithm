//5. wap to find product of first n natural numbers using recursion
#include<stdio.h>
int prod(int, int, int );
int main() {
	int a,b;
	printf("\n enter the numbers : ");
	scanf("%d %d",&a,&b);
	printf("\nproduct = %d",prod(a,b,0));
	return 0;
}
int prod(int a, int b, int i) {
	if(i<b)
		return (a+prod(a,b,i+1));
	else
		return 0;
}