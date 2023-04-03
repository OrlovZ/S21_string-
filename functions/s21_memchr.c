#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *tmp = (char *)str;
  int b = (int)n;
  void *result = NULL;
  while (b > 0) {
    b--;
    if (*tmp == c) {
      result = (void *)tmp;
      break;
    } else
      tmp++;
  }
  return result;
}