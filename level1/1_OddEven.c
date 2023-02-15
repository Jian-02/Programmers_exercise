#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
	// 리턴할 값은 메모리를 동적 할당해주세요
	char* answer = (char*)malloc(5 - num % 2);
	if (num == 0 || num % 2 == 0) {
		answer = "Even";
	}
	else {
		answer = "Odd";
	}
	return answer;
}

int main(int argc, char* argv[]) {
	printf("%s\n",solution(atoi(argv[1])));
}
