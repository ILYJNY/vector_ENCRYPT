//
// Created by Backup on 2024-03-23.
//
#include "vector_sources.h"
#include "get_public_key.cpp"
#include "decrypt.cpp"



int main() {
    int ask;
    printf("'1' for Encrypt, '2' for Decrypt");
    scanf("%d", &ask);
    if (ask == 1) {
        public_key publicKey = get_keys();
        result_find result = decrypt(publicKey);
        printf("\n%llu \t%llu", result.x, result.y);

    }
    else if (ask == 2) {

    }


}