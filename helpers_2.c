/*
 * File: helpers_2.c
 * Auth: Alex Yu
 *       Brennan D Baraban
 */

#include "shell.h"

void handle_line(char **line, ssize_t read);
ssize_t get_new_len(char *line);
void logical_ops(char *line, ssize_t *new_len);

/**
 * handle_line - Partitions a line read from standard input as needed.
 * @line: A pointer to a line read from standard input.
 * @read: The length of line.
 *
 * Description: Spaces are inserted to separate ";", "||", and "&&".
 *              Replaces "#" with '\0'.
 */
void handle_line(char **line, ssize_t read)
{
	/*implementation*/
}

/**
 * get_new_len - Gets the new length of a line partitioned
 *               by ";", "||", "&&&", or "#".
 * @line: The line to check.
 *
 * Return: The new length of the line.
 *
 * Description: Cuts short lines containing '#' comments with '\0'.
 */

ssize_t get_new_len(char *line)
{
	 /*implementation*/
}

