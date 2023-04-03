#include "../s21_string.h"

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  int b = (int)n;
  void *tmp = dest;

  //  можно реализовать без выделения памяти, но мне лень =)
  void *tmp1 = (void *)calloc(n + 1, sizeof(char));
  s21_memcpy(tmp1, src, n);
  void *tmp2 = tmp1;
  //

  while (b > 0) {
    *(char *)(dest++) = *(char *)(tmp1++);
    b--;
  }

  //
  if (tmp2 != NULL) free(tmp2);
  //
  return tmp;
}