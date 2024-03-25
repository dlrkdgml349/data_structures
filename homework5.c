#include <stdio.h>

void hanoi(int n, char start, char work, char target) { //n : 원반 개수, start : 시작점, work : 경유지, target : 목적지
	if (n == 1) {
		printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, target);
		return;
	}
	
	hanoi(n - 1, start, target, work); //덩어리(맨 밑 원반을 제외한 나머지)를 work(경유지)로 이동
	printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, target);
	hanoi(n - 1, work, start, target); //
	
}

int main(void) {
	hanoi(3, 'A', 'B', 'C');
}