#include <string.h>

#include "s21_string.h"

#define TEST

int main() {
  char mass[30] = {0};
  char mass_copy[30] = {0};
  char mass_tmp[30] = {0};
  scanf("%s", mass);
  strcpy(mass_copy, mass);
  strcpy(mass_tmp, mass);
  printf("your str - %s\n", mass);

  printf(
      "------------------ MEM TESTS ----------------\n\n--memchr  "
      "test--\n\tyour str - %s\n\tbase str - %s\n",
      (char *)s21_memchr(mass, '0', 5), (char *)memchr(mass_copy, '0', 5));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memcmp  test 1--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strncmp(mass, mass_copy, 10), strncmp(mass, mass_copy, 10));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memcmp  test 2--\n\tyour func - %d\n\tbase func - %d\n",
         s21_memcmp(mass, "mass", 10), memcmp(mass, "mass", 10));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memmove test 1\n\tyour func - %s\n\tbase func - %s\n",
         (char *)s21_memmove(mass, "MASS0IVE", 5),
         (char *)memmove(mass_copy, "MASS0IVE", 5));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memmove test 2\n\tyour func - %s\n\tbase func - %s\n",
         (char *)s21_memmove(&mass[1], &mass[0], 5),
         (char *)memmove(&mass_copy[1], &mass_copy[0], 5));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memcpy test 1\n\tyour func - %s\n\tbase func - %s\n",
         (char *)s21_memcpy(mass, "MASS0IVE", 3),
         (char *)memcpy(mass_copy, "MASS0IVE", 3));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memcpy test 2\n\tyour func - %s\n\tbase func - %s\n",
         (char *)s21_memcpy(&mass[1], &mass[0], 6),
         (char *)memcpy(&mass_copy[1], &mass_copy[0], 6));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);
  printf("--memset test\n\tyour func - %s\n\tbase func - %s\n",
         (char *)s21_memset(&mass[0], mass[4], 8),
         (char *)memset(&mass_copy[0], mass_copy[4], 8));
  strcpy(mass, mass_tmp);
  strcpy(mass_copy, mass);

  printf(
      "------------------ STR TESTS ----------------\n\n--strlen "
      "test--\n\tyour length - %ld\n\tbase length - %ld\n",
      s21_strlen(mass), strlen(mass_copy));
  s21_strcat(mass, "+");
  strcat(mass_copy, "+");
  printf("--strcat  test--\n\tyour str - %s\n\tbase str - %s\n", mass,
         mass_copy);
  s21_strncat(mass, "0123456789", 1);
  strncat(mass_copy, "0123456789", 1);
  printf("--strncat  test--\n\tyour str - %s\n\tbase str - %s\n", mass,
         mass_copy);
  printf("--strnchr  test--\n\tyour str - %s\n\tbase str - %s\n",
         s21_strchr(mass_copy, '0'), strchr(mass_copy, '0'));
  printf("--strcmp  test 1--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strcmp(mass, mass_copy), strcmp(mass, mass_copy));
  printf("--strcmp  test 2--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strcmp(mass, "mass"), strcmp(mass, "mass"));
  printf("--strcmp  test 3--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strcmp("mass1", "mass"), strcmp("mass1111", "mass16"));
  printf("--strncmp  test 1--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strncmp(mass, mass_copy, 10), strncmp(mass, mass_copy, 10));
  printf("--strncmp  test 2--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strncmp(mass, "mass", 10), strncmp(mass, "mass", 10));
  printf("--strncmp  test 3--\n\tyour func - %d\n\tbase func - %d\n",
         s21_strncmp("mass", "massive", 12), strncmp("mass", "massive", 12));
  printf("--strcpy test\n\tyour func - %s\n\tbase func - %s\n",
         s21_strcpy(mass, "mass"), strcpy(mass, "mass"));
  printf("--strncpy test\n\tyour func - %s\n\tbase func - %s\n",
         s21_strncpy(mass, "MASSIVE", 4), strncpy(mass, "MASSIVE", 4));
  printf("--strcspn test 1\n\tyour func - %d\n\tbase func - %d\n",
         (int)s21_strcspn("0123456789", "9876"),
         (int)strcspn("0123456789", "9876"));
  printf("--strcspn test 2\n\tyour func - %d\n\tbase func - %d\n",
         (int)s21_strcspn(mass, mass_tmp), (int)strcspn(mass, mass_tmp));

  return 0;
}
