#include <stdio.h>
#include <string.h>

char* inter(char* param_1, char* param_2){

    int i = 0, j = 0; //char * Result;
    //int n = strlen(param_1 -1);
    //int m = strlen(param_2 -1);
    char * result = 0;
    while (param_1[i] != '\0'){
        if (param_1[i] < param_2[j])
            i++;
        else if(param_1[i] > param_1[j])
            j++;
     
        else
            printf("%c",param_1[i]);
    
    
    }
    return 0;
    }


int main(){
    char param_1[] = {1,2,4,7};
    char param_2[] = {3,2,5,7};
    inter(param_1, param_2);

    return 0;
}