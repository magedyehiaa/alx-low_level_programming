#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>

int _putchar(char n);
char *_memcpy(char *m, char *a, unsigned int g);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);


#endif
