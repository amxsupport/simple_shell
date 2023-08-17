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
/* implementaion */
}
