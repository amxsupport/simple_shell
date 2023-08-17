#include "shell.h"

int cant_open(char *file_path);
int proc_file_commands(char *file_path, int *exe_ret);

/**
 * cant_open - If the file doesn't exist or lacks proper permissions, print
 * a cant open error.
 * @file_path: Path to the supposed file.
 *
 * Return: 127.
 */

int cant_open(char *file_path)
{
/* implementaion */
}

/**
 * proc_file_commands - Takes a file and attempts to run the commands stored
 * within.
 * @file_path: Path to the file.
 * @exe_ret: Return value of the last executed command.
 *
 * Return: If file couldn't be opened - 127.
 *	   If malloc fails - -1.
 *	   Otherwise the return value of the last command ran.
 */
int proc_file_commands(char *file_path, int *exe_ret)
{
	ssize_t file;
	ssize_t b_read;
	unsigned int line_size = 0;
	unsigned int old_size = 120;
	char *line;
	char buffer[120];

	file = open(file_path, O_RDONLY);
	if (file == -1)
	{
		perror("Error ");
		return (127);
	}

	line = malloc(sizeof(char) * old_size);
	if (!line)
		return (-1);
	line[0] = '\0';

	do {
		b_read = read(file, buffer, 120);
		line_size += b_read;
		line = _realloc(line, old_size, line_size);
		_strcat(line, buffer);
		old_size = line_size;
	} while (b_read == 120);

	exit(0);
}
