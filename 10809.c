// 각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
// 만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.


#pragma warning(disable:4996)
#include <stdio.h>
int main(void){
	char arr[101];
	int newarr[26];
	scanf("%s", arr);
	for (int a = 0; a < 26; a++) {
		newarr[a] = -1;
	}

	for (int i = 'a'; i <='z'; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (i == arr[j]) {
				newarr[arr[j] - 'a'] = j;
				break;
			}
		}
	}
	for (int a = 0; a < 26; a++) {
		printf("%d", newarr[a]);
		if (a < 25)
			printf(" ");
	}
	return 0;
}
