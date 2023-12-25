/**
 * File: 102-zombie.c
 * Author: Ali Mahmoud
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * infinite_while - Creates an infinite loop.
 *
 * Return: 0 (never reached).
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Entry point
 * Creates 5 Zombie processes.
 *
 * Return: 0 on SUCCESS.
*/
int main(void)
{
	pid_t pid;
	int count = 0;

	while (count < 5)
	{
		pid = fork();
		/* fork return PID of the child process is returned in the parent. */
		/* 0 is returned in the child. -1 if faild to fork. */
		if (pid == -1)
			exit(EXIT_FAILURE);

		if (pid > 0)
		{
			/* Printing the pid of Zombie process */
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			count++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
