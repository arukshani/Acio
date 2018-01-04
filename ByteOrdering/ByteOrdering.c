#include <stdio.h>

typedef unsigned char *byte_pointer;

int main() {
 /* code */
 show_int(12345);
 return 0;
}

void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_bytes(byte_pointer start, size_t len){
  printf("%d\n", len);
  int i = 0;
  for (i=0; i < len; i++) {
    printf("%.2x\n", start[i]);
  }

void test_show_bytes (int val) {
  int ival = val;
  show_int(ival);
}
}
