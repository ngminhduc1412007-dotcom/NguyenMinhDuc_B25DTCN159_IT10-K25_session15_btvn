#include<stdio.h>

int sumN(int n){
	int sum = 0;

	if (n < 0){
		n = -n;
	}
	while (n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main(){
	int checkNum;
	printf ("vui long nhap so nguyen: ");
	scanf ("%d", &checkNum);
	int result = sumN(checkNum);
	printf ("tong cac chu so trong so nguyen = %d", result);
	
	return 0;
}
