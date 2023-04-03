#include "../s21_string.h"

void *s21_memset(void *src, int c, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) {
    ((char *)src)[i] = c;
  }
  return src;
}
