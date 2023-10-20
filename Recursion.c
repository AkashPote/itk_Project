#include"header.h"
int main() {
	int n, f;
	printf("Enter your number Whose factorial you want calculate?");
	scanf("%d", &n); //n=5
	f = fact(n); //f=fact(0)
	printf("factorial=%d",fact(n));

}
int fact(int n) {

	if (n == 0) {
		return 0;//n==0
	}
	else if (n == 1) {
		return 1;//n==1
	}
	else {
		return n * fact(n - 1);// n* fact(n - 1) = 5 * fact(4)


	}
}
/*
n* fact(n - 1) = 5 * fact(4) step1
n* fact(n - 1) = 4 * fact(3) step2
n* fact(n - 1) = 3 * fact(2) step3
n* fact(n - 1) = 2 * fact(1) step4
			   = 2 * 1

*/