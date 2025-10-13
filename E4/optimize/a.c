#include <stdio.h>
int main(int argc, char *argv[]) {
  long long sum = 0;
  long i;
  for (i = 0; i < (1 << 30); i++) {
    sum += i;
  }
  printf("%lld", sum);
  return 0;
}
