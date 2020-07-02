#include <string.h>
#include <stdio.h>
#include <stdbool.h>


void my_swap(char *a, char *b) {
    char tmp = *a;

    *a = *b;
    *b = tmp;
}

char *reverse_string(char* param_1) {
    int begin_index = 0;
    int end_index = strlen(param_1) - 1;

    while (begin_index < end_index)
    {
        my_swap(&param_1[begin_index], &param_1[end_index]);

        begin_index += 1;
        end_index   -= 1;
    }
    return param_1;
}

bool my_isalpha(char c) {
    if ('a' <= c && c <= 'z') {
        return true;
    }
    if ('A' <= c && c <= 'Z') {
        return true;
    }
    return false;
}


bool my_isalpha_capitalize(char c) {
    if ('A' <= c && c <= 'Z') {
        return true;
    }
    return false;
}

char *my_downcase(char *str) {
    int index = 0;

    while (str[index] != '\0') {
        if (my_isalpha_capitalize(str[index]) == true) {
            str[index] += 32;
        }
        index += 1;
    }
    return str;
}

/*
a FiRSt LiTTlE TESt

A firsT littlE tesT
-> downcase and upcase the last letter

1# downcase on the string
a first little test

2# upcase the last letter
2a# reverse string
      tset elttil tsrif a
2b#
while until end of string
    while space
    if letter
       upcase letter of word
    while word
*/

char* capitalize(char* param_1){
    int index = 0;

    while (param_1[index] != '\0') {
        // GO THROUGHT SPACE
       while (param_1[index] != '\0' && param_1[index] == ' ') {
           index += 1;
       }
       if (my_isalpha(param_1[index]) == true) {
           param_1[index] -= 32;
       }
       while (param_1[index] != '\0' && param_1[index] != ' ') {
           index += 1;
       }
    }
    return param_1;
}


int main(int ac, char **av) {
    char* param_1 = strdup(av[1]);
//    char* param_1 = strdup("a FiRSt LiTTlE TESt");

    my_downcase(param_1);
    reverse_string(param_1);
    capitalize(param_1);
    reverse_string(param_1);

    printf("%s\n", param_1);
    return 0;
}
