#include <stdio.h> 
#define NO_OF_CHARS 256 

int is_anagram(char* param_1, char* param_2)

{ 
    // Create 2 count arrays and initialize all values as 0 
    int count1[NO_OF_CHARS] = { 0 }; 
    int count2[NO_OF_CHARS] = { 0 }; 
    int i; 
  
    // For each character in input strings, increment count in 
    // the corresponding count array 
    for (i = 0; param_1[i] && param_2[i]; i++) { 
        count1[param_1[i]]++; 
        count2[param_2[i]]++; 
    } 
  
    // If both strings are of different length. Removing this 
    // condition will make the program fail for strings like 
    // "aaca" and "aca" 
    if (param_1[i] || param_2[i]) 
        return 0; 
  
    // Compare count arrays 
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count1[i] != count2[i]) 
            return 0; 
  
    return 1; 
}
/*
int main() 
{ 
    char str1[] = "The"; 
    char str2[] = "heT"; 
    if (areAnagram(str1, str2)) 
        printf("The two strings are anagram of each other"); 
    else
        printf("The two strings are not anagram of each other"); 
  
    return 0; 
}
*/