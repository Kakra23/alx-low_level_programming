#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - PRINT ALL POSSIBLE COMBINATIONS 
*Return: 0
*/
int main(void)
{int n;
for (n = '0'; n <= '9'; n++)
{putchar(n);
if (n != '9')
{putchar(',');
putchar(' ');
}
}
putchar('\n'); 
return (0);
}
