//배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void sort(char *arr) {
	for (int i = 0; i < strlen(arr)-1; i++) {  //어짜피 마지막 수는 제일 작은게 될테니 (길이-1)까지 돌려주면 됨
		for (int j = i; j < strlen(arr); j++) {  //비교해야하니까
			if (arr[i] < arr[j]) {  //전꺼가 뒤꺼보다 작으면 뒤로 보내줄거
				int temp = arr[i];  //이건 자동정렬 코드
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	char arr[100001];
	scanf("%s", &arr);
	sort(arr);
	printf("%s", arr);
 }
