i# holbertonschool-low_level_programming

C-HELLO WORLD

0-Preprocessor

```bash
#!/bin/bash
gcc -E $CFILE -o c

Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

1-Compiler

#!/bin/bash
gcc -c $CFILE

write a script that compiles a C file but does not link

2-Assembler

#!/bin/bash
gcc -S $CFILE

script that generates the assembly code of a C code and save it in an output file

3-Name

#!/bin/bash
gcc $CFILE -o cisfun

script that compiles a C file and creates an executable named cisfun

4-puts.c

#include <stdio.h>
/**
 * main - Print Programming is like building a multilingual puzzle
 * Return: always 0
 */
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}

5-Printf.c

#include <stdio.h>
/**
 * main -print:  with proper grammar, but the outcome is a piece of art,
 * Return: always 0
 */
int main(void)
{
printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}

6-Sizeof

#include <stdio.h>
/**
 * main -print: size of various types
 * Return: always 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}

C - Variables,if,else,while

0. Positive anything is better than negative nothing

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else
	{
		printf("%d is zero\n", n);
	}

return (0);
}



