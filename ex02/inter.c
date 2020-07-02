#include <stdio.h>
#include <stdlib.h>

int my_str_index(char *s, char c) {
    int index = 0;

    while (s[index] != '\0') {
        if (s[index] == c) {
            return index;
        }
        index += 1;
    }
    return -1;
}

int my_strlen(char *str) {
    int index = 0;

    while (str[index]) {
        index += 1;
    }
    return index;
}

void my_push_character(char *dest, char c) {
    int index = 0;

    while (dest[index] != '\0') {
        index += 1;
    }
    dest[index] = c;
    dest[index + 1] = '\0'; 
}

char* inter(char* param_1, char* param_2)
{
    int index = 0;
    char *result = malloc(sizeof(*result) * (my_strlen(param_1) + 1));

    result[0] = '\0';
    while (param_1[index] != '\0') {
        int found_index = my_str_index(param_1, param_1[index]);

        if (found_index == index) {
            if (my_str_index(param_2, param_1[index]) != -1) {
                my_push_character(result, param_1[index]);
            }
        }
        index += 1;
    }
    return result;
}
/*


char* mystrcpy(char *dst, char *src)
{
    int index = 0;

    while (src[index] != '\0') {
        dst[index] = src[index];
    }
    return dst;
}
*/
//
// padinto
//
// s1 - padinton
// s2 - paqefwtdjetyiytjneytjoeyjnejeyj
// result << painto

// padinto
/*
int main(int ac, char **av) {
//    char* param_1 = "padinton";
//    char* param_2 = "paqefwtjetyiytjneytjdoeyjnejeyj";

    // ???? <-- 0
//    inter(param_1, param_2);
    char *s = inter(av[1], av[2]);
    printf("RESULT IS %s\n", s);
    free(s);
    return 0;
}
*/