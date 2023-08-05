#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc : number of arguements
 * @argv : always of arguements
 *
 * Return : Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - print each arguements*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

