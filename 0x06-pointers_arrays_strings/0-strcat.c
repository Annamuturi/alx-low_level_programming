#include <stdio.h>
#include <string.h>
/*The function takes two pointers 
 * to char arrays 
 * dest and src 
 * Return a pointer to the concentrated string dest
 */ 

char *_strcat(char *dest, char *src)
{
    int i, j;
    i = strlen(dest);
    for (j = 0; src[j] != '\0'; j++) {
        dest[i+j] = src[j];
    }
    dest[i+j] = '\0';
    return dest;
}
