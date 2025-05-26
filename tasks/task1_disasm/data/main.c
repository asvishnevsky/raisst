#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter password\n");
  char s[64];
  scanf("%s", &s);
  bool res = strcmp("p@sSword", s);
  if (res == 0) {
    printf("Success\n");
  } else {
    printf("Wrong password\n");
  }
  return 0;
}
