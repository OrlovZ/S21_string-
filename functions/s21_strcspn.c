#include "../s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t length = 0;
  int res = 1;
  const char *tmp = str2;
  while (*str1 && res) {
    while (*str2 && res) {
      if (*str2 == *str1) res = 0;
      str2++;
    }
    str2 = tmp;
    str1++;
    if (res) length++;
  }
  return length;
}