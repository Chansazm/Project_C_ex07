#include <stdio.h>
#include <string.h>

int check(char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(str[i] == str[n])
        {
            return 0;
        }
    }    
    return 1;  
}

int my_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}


char* my_union(char* str1, char* str2)
{
    int size1 = my_strlen(str1);
    int size2 = my_strlen(str2);

    char *result = (char *) malloc((size1 + size2) * sizeof(char));
    
    strcat(str1, str2);

    for (int i = 0; i < (size1 + size2); i++)
    {
        if (check(str1,i) == 1)
        {
            char b[2];
            b[0] = str1[i];
            b[1] = '\0';
            strcat(result, b);
        }

    }return result;
    
}