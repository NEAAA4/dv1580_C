#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 == str || num2 == str){
        return 0;
    }
    if (num2 == 0){
        printf("DIV ZERO NOT ALLOWED!\n");
        return 0;
    }

    int sum = num1 / num2;
    return sum;
}
