#import "../s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int b = (int)n;
  char *t1 = (char *)str1;
  char *t2 = (char *)str2;
  int result = 0;
  while (*t1 && result == 0 && b > 0) {
    if (*t1 != *t2) result = *t1 - *t2;
    t1++;
    t2++;
    b--;
    if (!(*t1) && !(*t2))
      break;
    else if (!(*t1) || !(*t2))
      result = (*t1) > (*t2) ? 1 : -1;
  }
  return result;
}