#include <stdio.h>
#include <stdlib.h>

int main() {

  int *p;
  int length = 2;
  p = (int*)malloc(length * sizeof(int));
  // assign values
  *p = 0;
  *(p+1) = 1;

  printf("p = %p\n",p);
  for(int i=0;i<length;i++) {
    printf("*(p+%d) = %d\n",i,*(p+i));
  }

  length *= 2;
  p = realloc(p,length);
  // assign values
  *(p+2) = 2;
  *(p+3) = 3;
  printf("p = %p\n",p);

  for(int i=0;i<length;i++) {
    printf("*(p+%d) = %d\n",i,*(p+i));
  }
}
