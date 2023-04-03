#include "../s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int b = (int)n;
  int result = 0;
  while (*str1 && result == 0 && b > 0) {
    if (*str1 != *str2) result = *str1 - *str2;
    str1++;
    str2++;
    b--;
    if (!(*str1) && !(*str2))
      break;
    else if (!(*str1) || !(*str2))
      result = (*str1) > (*str2) ? 1 : -1;
  }
  return result;
}