#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int main(void) {
  int freq[SIZE] = {0};
  int i;
  int temp;
  for (i = 0; i < 6; i++) {
    temp = rand() % 6;  // 랜덤 면 선택
    freq[temp]++;       // 선택된 면의 빈도 증가
    printf("%d번째 반복: 선택된 면 = %d, 해당 면 누적 빈도 = %d\n", i+1, temp+1, freq[temp]);
  }
  printf("===================\n");
  printf("면 빈도 \n");
  printf("===================\n");
  for (i = 0; i < SIZE; i++) {
    printf("%3d %3d \n",i+1, freq[i]);
  }
  return 0;
}