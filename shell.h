#ifndef _SHELL_H_
#define _SHELL_H_

/*
 * File: shell.h
 *
 */

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

/* String functions */
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
char *_strcpy(char *dest, const char *src);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/* Builtin Helpers */
char **_copyenv(void);
void free_env(void);
char **_getenv(const char *var);


#endif /* _SHELL_H_ */
