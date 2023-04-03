#include "../s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *tmp = (char *)str;
  char *result = NULL;
  while (*tmp) {
    if (*tmp == c)
      break;
    else
      tmp++;
  }
  if (*tmp != '\0') result = tmp;
  return result;
}