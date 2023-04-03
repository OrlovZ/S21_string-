#include "../s21_string.h"

char *s21_strncpy(char *dest, const char *src, size_t n) {
  int b = (int)n;
  char *tmp = dest;
  while (*src && b > 0) {
    *dest++ = *src++;
    b--;
  }
  *dest = '\0';
  return tmp;
}