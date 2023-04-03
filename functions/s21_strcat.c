#include "../s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  int i = 0;
  int l = (int)s21_strlen(dest);
  while (*src) {
    *(dest + l + i) = *(src++);
    i++;
  }
  *(dest + l + i) = *src;
  return dest;
}
