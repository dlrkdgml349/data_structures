#include <stdio.h>
int main(void) {
	int cnt = 0;
	char s1[20];
	printf("문자열을 입력하세요: ");
	scanf_s("%s", s1, 20);
	while (s1[cnt] != '\0')
		cnt++;
	printf("\n입력된 문자열은\n\"%s\"\n입니다.\n\n입력된 문자열의 길이 = %d", s1, cnt);
	return 0;
}