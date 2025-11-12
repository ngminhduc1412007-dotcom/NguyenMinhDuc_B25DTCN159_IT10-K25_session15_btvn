#include <stdio.h>
#include <math.h>

int diff(int a, int b){
	return a - b;
}
int pro(int a, int b){
	return a * b;
}
int main(){
	int num1;
	int num2;
	printf ("nhap so thu nhat: ");
	scanf ("%d", &num1);
	printf ("nhap so thu hai: ");
	scanf ("%d", &num2);
	
	int diff = num2 - num1;
	printf ("su chenh lech cua 2 so la: %d \n", diff);
	int pro = num1 * num2;
	printf ("tich cua hai so la: %d", pro);
	
	return 0;
}
