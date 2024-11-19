#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void){
    int scores[SIZE];
    for(int i =0; i<SIZE; i++){
        scores[i] = rand() % 100; // 0부터 99까지의 난수 생성
    }
    for(int i = 0; i<SIZE; i++){
        printf("scores[%d]=%d\n",i,scores[i]);
    }
    return 0;
}