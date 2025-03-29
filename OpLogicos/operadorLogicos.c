#include <stdio.h>

int main(){

    int a = -10, b = 5;

    if (a > 0 && b > 0)
    { 
        printf("Os dois numeros sao positivos \n");
    }else { 
        printf("Pelo menos um dos numeros e negativos \n");
    }

    if (a > 0 || b > 0)
    { 
        printf("Pelo menos um dos numeros e positivos \n");
    }else { 
        printf("Os dois numeros sao negativos \n");
    }












    return 0;
}