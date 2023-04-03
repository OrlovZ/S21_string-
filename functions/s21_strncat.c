#include "../s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  int i = 0;
  int nMax = (int)n;
  int l = (int)s21_strlen(dest);
  while (*src && i < nMax) {
    *(dest + l + i) = *(src++);
    i++;
  }
  *(dest + l + i) = '\0';
  return dest;
}
