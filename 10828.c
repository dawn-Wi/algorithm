//push X: 정수 X를 스택에 넣는 연산이다.
//pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
//size: 스택에 들어있는 정수의 개수를 출력한다.
//empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
//top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int totalstack[10001];
int m=0;
void push(int num) {
	totalstack[m] = num;
	m++;
}
void pop() {
	if (m != 0) {
		m--;
		printf("%d\n", totalstack[m]);
		totalstack[m] = 0;
	}
	else
		printf("%d\n",-1);
}
void size() {
	printf("%d\n", m);
}
void empty() {
	if (m != 0)
		printf("%d\n", 0);
	else
		printf("%d\n", 1);
}
void top() {
	if (m != 0) {
		printf("%d\n", totalstack[m-1]);
	}
	else
		printf("%d\n", -1);
}
int main() {
	char stack[10];
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%s", &stack);
		if (strcmp(stack, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(stack, "pop") == 0) {
			pop();
		}
		else if (strcmp(stack, "size") == 0) {
			size();
		}
		else if (strcmp(stack, "empty") == 0) {
			empty();
		}
		else if (strcmp(stack, "top") == 0) {
			top();
		}
	}
 }
