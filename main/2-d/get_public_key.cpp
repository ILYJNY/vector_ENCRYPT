//
// Created by Backup on 2024-03-23.
#include "cstdio"
#include "vector_sources.h"





public_key get_keys() {
    long double first_x;
    long double first_y;
    long double second_x;
    long double second_y;
    long long int times_first;
    long long int times_second;

    printf("%s\n", "Enter x of 1st vector: ");
    scanf("%Lf", &first_x);
    printf("%s\n", "Enter y of 1st vector: ");
    scanf("%Lf", &first_y);
    printf("%s\n", "Enter how many times you will do on 1nd vector : ");
    scanf("%llu", &times_first);
    printf("%s\n", "Enter x of 2nd vector: ");
    scanf("%Lf", &second_x);
    printf("%s\n", "Enter y of 2nd vector: ");
    scanf("%Lf", &second_y);
    printf("%s\n", "Enter how many times you will do on 2nd vector : ");
    scanf("%llu", &times_second);
    keys return_trash = {{first_x, first_y}, {second_x, second_y}};
    public_key result = {return_trash, times_first, times_second};
    return result;

}

//int get_keys_times() {  //받은 이진수열 개수로 변환하는 문제생김
//    int first = 0;
//    int second = 0;
//    char binarysInput;
//    int* binarysInput_array;
//    for (int i=0;i<sizeof(binarysInput);i++)
//        scanf("%1d", &binarysInput_array[i]);
//
//    for (int i = 0;i<sizeof(binarysInput_array);i++) {
//        if (binarysInput_array[i] == 0)
//            first += 1;
//
//        else if (binarysInput_array[i] == 1)
//            second += 1;
//
//    }
//
//
//}

