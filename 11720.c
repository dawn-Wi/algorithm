//N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int a,sum=0;  
	scanf("%d", &a);  //몇개 입력할건지 받기
	char arr[101];  //각자리 저장할 배열 만들기
	scanf("%s", &arr);  //뭉탱이 저장
	for (int i = 0; i < a; i++) {  //for문으로 arr배열에 있는거 하나씩 sum에 넣을건데 
		sum += arr[i] - '0';  //문자열이니까 -'0'해서 문자를 숫자로 바꿔야함
	}
	printf("%d", sum);  //sum printf해줘야함
	return 0;
}
