//
// Created by Backup on 2024-03-23.
#include "cstdio"
#include "vector_sources.h"





keys get_keys() {
    double first_x;
    double first_y;
    double second_x;
    double second_y;

    printf("%s", "Enter x of 1st vector: ");
    scanf("%lf", &first_x);
    printf("%s", "Enter y of 1st vector: ");
    scanf("%lf", &first_y);
    printf("%s", "Enter x of 2nd vector: ");
    scanf("%lf", &second_x);
    printf("%s", "Enter y of 2nd vector: ");
    scanf("%lf", &second_y);

    keys return_trash = {{first_x, first_y}, {second_x, second_y}};

    return return_trash;

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

