#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
	int answer = 0;
	if (n > 100000000) {
		return answer;
	}
	while(n != 0) {
		answer += n % 10;
		n = n / 10;
	}
	return answer;
}


int main(int argc, char* argv[]) {
	printf("%d\n", solution(atoi(argv[1])));
}
