/*
 * File: main.c
 *
 */

#include "shell.h"
void sig_handler(int sig);
int execute(char **args, char **front);

/**
 * sig_handler - Prints a new prompt upon a signal.
 * @sig: The signal.
 */
void sig_handler(int sig)
{
	char *new_prompt = "\n$ ";

	(void)sig;
	signal(SIGINT, sig_handler);
	write(STDIN_FILENO, new_prompt, 3);
}

/**
 * execute - Executes a command in a child process.
 * @args: An array of arguments.
 * @front: A double pointer to the beginning of args.
 *
 * Return: If an error occurs - a corresponding error code.
 *         O/w - The exit value of the last executed command.
 */
int execute(char **args, char **front)
{
/* implementing execute */
}

/**
 * main - Runs a simple UNIX command interpreter.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: The return value of the last executed command.
 */
int main(int argc, char *argv[])
{
	pid_t child_pid;
	int status;
	char **argv;
	size_t n, index;
	ssize_t read;
	char *line;

	line = NULL;
	while (1)
	{
		printf("$ ");
		n = 0;
		if ((read = getline(&line, &n, stdin)) == -1)
		{
			printf("read failed\n");
			return (1);
		}
		argv = _strtok(line, " ");
		if (argv[0][0] != '/')
			argv[0] = get_location(argv[0]);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error child:");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error exec gone wrong:");
		}
		else
		{
			wait(&status);
		}
		for (index = 0; argv[index]; index++)
			free(argv[index]);
		free(argv);
		free(line);
		return (0);
	}
	return (0);
}
