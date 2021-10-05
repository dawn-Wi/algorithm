//문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
//입력예시
// 2
// 3 ABC
// 5 /HTP
// 출력예시
// AAABBBCCC
// /////HHHHHTTTTTPPPPP

#include <stdio.h>
#include <string.h>  //백준에서 strlen 오류나서
int main() {
	char arr[21];  //새로운 배열에 넣어주고 마지막에 출력하기 위해
	int T,a;  
	scanf("%d", &T);  //처음에 몇개받을건지
	for (int i = 0; i < T; i++) {  //총 2번을 돌리거다
		scanf("%d %s", &a, arr);  // 몇번 뭘 돌릴건지 입력받고
		for (int j = 0; j < strlen(arr); j++) {  // 총 arr길이만큼 돌릴건데
			for (int k = 0; k < a; k++) {  //각각 a번씩 돌릴거고
				printf("%c", arr[j]);  //arr에 돌려서 들어간거 한개씩 출력해봐
			}
		}
		printf("\n");//한줄했으면 다음줄로 넘어가봐
	}
	return 0; //끝
}
