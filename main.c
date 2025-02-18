
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
        for (int i = 1; i < argc; i++){
            toDecimal(argv[i], strlen(argv[i]));
            toHex(argv[i], strlen(argv[i]));
            toBinary(argv[i], strlen(argv[i]));
            toASCII(argv[i], strlen(argv[i]));
        }
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