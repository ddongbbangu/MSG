#include <stdio.h>
main(){
  int i, j;
  printf("1에서 9까지의 숫자를 입력하세요\n");

  for(j=1; j<10; j++){
    for(i=1; i<=9; i++){
      printf("%d*%d = %d\n", i, j, i*j);
    }
  
  }
}