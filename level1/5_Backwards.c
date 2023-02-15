#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    if (n > 10000000000) {
        return NULL;
    }
    int count = 0;
    long long temp = n;
    while(temp > 0) {
        temp = temp / 10;
        count ++;
    }
    //리턴할 값은 메모리를 통해 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*count);
    count = 0;
    while(n > 0) {
        *(answer + count) = n % 10;
        n = n / 10;
        count ++;
    }
    return answer;
}

int main(int argc, char* argv[]) {
    int * result = solution((long long)argv[1]);
    printf("%d\n", *(result));
}