#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocat memory
 * @b: int
 * Description: check and allocate memory
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int i, s1len, s2len;
    unsigned int j = 0;

    if (!s1)
        s1 = "";

    if (!s1)
        s1 = "";

    for (s1len = 0; s1[s1len] != NULL; s1len++){}
    for (s2len = 0; s2[s2len] != NULL; s2len++){}

    ptr = malloc (sizeof(*ptr) * s1len + n + 1);

    if (!ptr)
    return (NULL);
    
    for (i = 0; i < s1len ; i++)
    {
        ptr[i] = s1[i];
    }

      while (j < n)
      {
      ptr[i] = s2[j];
      ptr++;
      j++;
      }
   
    
    return (ptr);
}