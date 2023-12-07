#include <stdio.h>

int main() {
	// 변수 선언 및 입력
	int n;
	scanf("%d", &n);
	int prod = 1;
	int x = 0;
	
    while(1) {
		// prod가 n이 될 때까지 2를 곱합니다.
		if(n == prod)
			break;
		
		prod *= 2;
		x++;
    }
	
	printf("%d", x);
	
    return 0;
}