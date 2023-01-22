#include<stdio.h>
int main(){
	int i, n, sum = 0 , numbers;
	float Average;
	
	printf("Enter How many numbers you want? \n");
	scanf("%d", &n);
	printf("Enter the elements one by one\n");
	for(i= 0; i<n; ++i){
		scanf("%d", &numbers);
		sum = sum+ numbers;
	}
	Average = sum /n;
	printf("\nSum of the %d numbers = %d", n ,sum);
	printf("\nAverage of the %d Numbers = %2f", n ,Average);
	return 0 ;
}