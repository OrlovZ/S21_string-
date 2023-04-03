#ifndef S21_STRING_H_
#define S21_STRING_H_

#define s21_size_t unsigned long  // typedef!

#ifndef TEST
// #define NULL ((void *)0)  // пока подключен string.h - заккоментирован
#endif

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void *s21_memchr(const void *str, int c, s21_size_t n);

int s21_memcmp(const void *str1, const void *str2, s21_size_t n);

void *s21_memcpy(void *dest, const void *src, s21_size_t n);

void *s21_memmove(void *dest, const void *src, s21_size_t n);

void *s21_memset(void *src, int c, s21_size_t n);

s21_size_t s21_strlen(const char *str);

char *s21_strcat(char *dest, const char *src);

char *s21_strncat(char *dest, const char *src, s21_size_t n);

char *s21_strchr(const char *str, int c);

int s21_strcmp(const char *str1, const char *str2);

int s21_strncmp(const char *str1, const char *str2, s21_size_t n);

char *s21_strcpy(char *dest, const char *src);

char *s21_strncpy(char *dest, const char *src, s21_size_t n);

s21_size_t s21_strcspn(const char *str1, const char *str2);

#endif  //  S21_STRING_H_