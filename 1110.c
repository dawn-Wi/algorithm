// 26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
// 위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.
// N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.

#pragma warning(disable:4996)
#include <stdio.h>
int main(){
	int num;
	int count = 0;
	
	scanf("%d", &num);
	int result = num;

	while (1) {
		int a = num / 10;
		int b = num % 10;
		int c = (a + b) % 10;
		int d = b * 10 + c;
		num = d;
		count++;
		if (result == num)
			break;
	}
	printf("%d", count);
	
}
