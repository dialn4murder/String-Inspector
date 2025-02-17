
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toBinary(char* input, int size);
void toHex(char* input, int size);
void toDecimal(char* input, int size);
void toASCII(char* input, int size);

int main(int argc, char *argv[]){

    if (argc == 1){
        printf("An argument is needed!");
    }

    if (argc >= 2){
        toDecimal(argv[1], strlen(argv[1]));
        toHex(argv[1], strlen(argv[1]));
        toBinary(argv[1], strlen(argv[1]));
        toASCII(argv[1], strlen(argv[1]));
    }
    
    return 0;
}

void toBinary(char* input, int size){
    printf("Binary: \n");
    for (int i = 0; i < size; i++){
        for (int b = 7; b >= 0; b--){
            int bit = (input[i] >> b) & 0b00000001;
            printf("%u", bit);
        }
        printf("\n");
    }
}

void toHex(char* input, int size){
    printf("Hex: \n");
    for (int i = 0; i < size; i++){
        printf("%x \n", input[i]);
    }
}

void toDecimal(char* input, int size){
    printf("Decimal: \n");
    for (int i = 0; i < size; i++){
        printf("%u \n", (int)input[i]);
    }
}

void toASCII(char* input, int size){
    printf("ASCII: \n");
    for (int i = 0; i < size; i++){
        printf("%c \n", input[i]);
    }
}