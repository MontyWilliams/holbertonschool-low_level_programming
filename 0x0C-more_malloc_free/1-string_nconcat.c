#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocat memory
 * @b: int
 * Description: check and allocate memory
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int i, s1len = strlen(s1), s2len = strlen(s2);
    unsigned int j = 0;

    if (!s1)
        s1 = "";

    if (!s1)
        s1 = "";

    

    ptr = malloc (sizeof(*ptr) * s1len + s2len + 1);

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
      while (n >= s2len)
      {
      ptr[i] = s2[j];
      ptr++;
      j++;
       if (n < (s1len + s2len + 1))
       break;
      }
      
   
    
    return (ptr);
}
