
#include <stdio.h>
void toBinary(char bytes[]);
void toHex(char bytes[]);
void toDecimal(char bytes[]);

int main(){

    unsigned char bytes[13];

    bytes[0] = 0b01001101;
    bytes[1] = 79;
    bytes[2] = 0b00100000;
    bytes[3] = 0b01101110;
    bytes[4] = 61;
    bytes[5] = 0x6D;
    bytes[6] = 0b01100101;
    bytes[7] = 20;
    bytes[8] = 69;
    bytes[9] = 73;
    bytes[10] = 0b00101110;
    bytes[11] = '.';
    bytes[12] = 0b00101110;
    bytes[13] = 0b00100000;

    toBinary(bytes);
    toHex(bytes);
    toDecimal(bytes);
    
    return 0;
}

void toBinary(char bytes[]){
    printf("Binary: \n");
    for (int i = 0; i <= 13; i++){
        for (int b = 7; b >= 0; b--){
            int bit = (bytes[i] >> b) & 0b00000001;
            printf("%u", bit);
        }
        printf("\n");
    }
}

void toHex(char bytes[]){
    printf("Hex: \n");
    for (int i = 0; i <= 13; i++){
        printf("%x \n", bytes[i]);
    }
}

void toDecimal(char bytes[]){
    printf("Decimal: \n");
    for (int i = 0; i <= 13; i++){
        printf("%u \n", bytes[i]);
    }
}