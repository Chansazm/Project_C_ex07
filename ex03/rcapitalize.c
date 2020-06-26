#include <string.h>
//#include <ctype.h>
#include <stdio.h>

char* rcapitalize(char* param_1){
int length = strlen(param_1);
//printf("%d\n",length);


for( int i = 0; i < length; i++){
    if (param_1[i] == ' ' || param_1[i] == '\0') 
    {
      param_1[i-1] = param_1[i] - 'a' + 'A'; 
      
    }
}

return param_1;
}

int main(){
    char* param_1 = "a FiRSt LiTTlE TESt";
    rcapitalize(param_1);
    return 0;
}
//Input: "a FiRSt LiTTlE TESt"
//Return Value: "A firsT littlE tesT"
