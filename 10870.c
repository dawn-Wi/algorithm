// 피보나치 수는 0과 1로 시작한다. 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다. 그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.
// n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성하시오.

#pragma warning(disable:4996)
#include <stdio.h>
int fibo(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else if (num > 1) {
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
