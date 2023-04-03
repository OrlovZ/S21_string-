CC=gcc -std=c11
CFLAGS=-Wall -Werror -Wextra
FUNC_SOURCES=functions/s21_strcat.c \
functions/s21_strncat.c functions/s21_strlen.c \
functions/s21_strchr.c functions/s21_strcmp.c \
functions/s21_strncmp.c functions/s21_strcpy.c \
functions/s21_strncpy.c functions/s21_memchr.c \
functions/s21_memcmp.c functions/s21_memcpy.c \
functions/s21_memmove.c functions/s21_memset.c \
functions/s21_strcspn.c
FUNC_OBJ=$(FUNC_SOURCES:.c=.o)

all: clean style s21_string.a manual_test

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

s21_string.a: $(FUNC_OBJ)
	ar -rc s21_string.a $(FUNC_OBJ)
	ranlib s21_string.a

manual_test: s21_string.a
	$(CC) $(CFLAGS) manual_test.c s21_string.a -o manual_test
	./manual_test

style:
	clang-format -style=google -n ./functions/*.c *.c *.h

styled:
	clang-format -style=google -i functions/*.c *.c *.h

clean:
	rm -rf $(FUNC_OBJ)
	rm -rf s21_string.a
	rm -rf manual_test

