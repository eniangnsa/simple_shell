#include <stdio.h>
/**
 * main - a program that prints hello betty
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Hello Betty");
	return 0;
#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_ppid;

    my_ppid = getppid();
    printf("%u\n", my_ppid);
    return (0);
}	
