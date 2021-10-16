// 0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

#pragma warning(disable:4996)
#include <stdio.h>
int fac(int num) {
	if (num > 1) {
		return fac(num - 1) * num;
	}
	else {
		return 1;
	}
}
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", fac(n));
	return 0;
}
