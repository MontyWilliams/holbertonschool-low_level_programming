#include "main.h"
/**
 * jack_bauer - 24 hour count down
 * Description: counts up to 24 hours
 * Return: void
 */
void jack_bauer(void)
{
int hb, hs, mb, ms;
for (hb = '0'; hb <= '2'; hb++)
{
for (hs = '0'; hs <= '9'; hs++)
{
for (mb = '0'; mb <= '5'; mb++)
{
for (ms = '0'; ms <= '9'; ms++)
{
_putchar (hb);
_putchar (hs);
_putchar (':');
_putchar (mb);
_putchar (ms);
_putchar ('\n');
}
}
if (hb == '2' && hs == '3')
{
break;
}
}
}
}
