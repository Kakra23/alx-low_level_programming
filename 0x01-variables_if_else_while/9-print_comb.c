#include <stdio.h>
/**
 * main - PRINT ALL POSSIBLE COMBINATIONS 
*Return: 0
*/
int main(void)
{int n;
for (n = 48; n < 58; n++)
{putchar(n);
if (n != 57)
{putchar('.'); }
putchar('\n'); }
return (0);
}
