#include<stdio.h>

int reverseN(int n){
	int reverse = 0;
	if (n < 0){
		n = -n;
	}	
	while (n > 0){
		reverse = reverse * 10 + n%10;
		n = n / 10;
	}
	return reverse;
}
int main(){
	int revN;
	printf ("nhap vao so nguyen: ");
	scanf ("%d", &revN);
	int result = reverseN(revN);
	printf ("so nghich dao la: %d", result);
	return 0;
}
