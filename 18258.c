// push X: 정수 X를 큐에 넣는 연산이다.
// pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 큐에 들어있는 정수의 개수를 출력한다.
// empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
// front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성

//백준에서는 시간제한으로 걸림 but, 제대로 동작은 함


#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
char queue[10001];
int count = 0;
void push(int a) {
	queue[count] = a;
	count++;
}
void pop() {
	if (count != 0) {
		printf("%d\n", queue[0]);
		for (int i = 1; i < count; i++) {
			queue[i-1] = queue[i];
		}
		count--;
	}
	else
		printf("%d\n", -1);
}
void size() {
	printf("%d\n", count);
}
void empty() {
	if (count != 0) {
		printf("%d\n", 0);
	}
	else
		printf("%d\n", -1);
}
void front() {
	if (count != 0) {
		printf("%d\n", queue[0]);
	}
	else
		printf("%d\n", -1);
}
void back() {
	if (count != 0) {
		printf("%d\n", queue[count-1]);
	}
	else
		printf("%d\n", -1);
}
int main() {
	int num;
	char arr[10];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", &arr);
		if (strcmp(arr, "push") == 0) {
			int a;
			scanf("%d", &a);
			push(a);
		}
		else if (strcmp(arr, "pop") == 0) {
			pop();
		}
		else if (strcmp(arr, "size") == 0) {
			size();
		}
		else if (strcmp(arr, "empty") == 0) {
			empty();
		}
		else if (strcmp(arr, "front") == 0) {
			front();
		}
		else if (strcmp(arr, "back") == 0) {
			back();
		}
	}
}
