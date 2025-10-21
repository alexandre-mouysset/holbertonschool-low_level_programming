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

1. The last digit

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int x;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        x = n % 10;

        if (x > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, x);
        }
        else if (x == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, x);
        }
        else
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
        }
        return (0);
}

2. Print all the Alphabet in lowercase with for 

#include <stdio.h>

/**
 * main - Alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                putchar(alphabet);
        }
        putchar('\n');

return (0);
}

3. Print all the Alphabet in lower and uppercase with for

#include <stdio.h>

/**
 * main - Print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alphabet;
        char ALPHABET;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                putchar(alphabet);
        }
        for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
        {
                putchar(ALPHABET);
        }
        putchar('\n');

return (0);
}

4. Print all the alphabet except q and e

#include <stdio.h>

/**
 * main - Alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                if (alphabet != 'q' && alphabet != 'e')
                {
                putchar(alphabet);
                }
        }
        putchar('\n');

return (0);
}

5. Decimal with printf

#include <stdio.h>

/**
 * main - print 0123456789
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int decimal;

	for (decimal = 0; decimal < 10; decimal++)
	{
		printf("%d", decimal);
	}
	printf("\n");
return (0);
}


6. Decimal with putchar


#include <stdio.h>

/**
 * main - print 0123456789 with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int decimal;

        for (decimal = 0; decimal < 10; decimal++)
        {
                putchar(decimal + '0');
        }
        putchar('\n');
return (0);
}
