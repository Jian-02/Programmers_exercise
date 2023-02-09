#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
	double answer = 0;
	if(arr_len < 1 || arr_len > 100)
		return answer;
	for(int i = 0; i < arr_len; i++) {
		if(arr[i] < -10000 || arr[i] > 10000)
			return answer;
		answer += arr[i];
	}
	answer /= arr_len;
	return answer;
}


int main(int argc, char* argv[]) {
	printf("%.2f\n", solution(atoi(argv[1]), 3));
}
