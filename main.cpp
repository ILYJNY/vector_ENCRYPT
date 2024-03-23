#include <iostream>
#include <cstring>
#include "vector"
#include "vector_struct.cpp"
#include "cstdio"
#include "vector_struct.h"



int main() {
    int dimensions;
    double* vectors;


    scanf("%d", &dimensions);
    for (int i = 0;i<dimensions;i++)
        scanf("%d", &vectors[i]);

    struct dimensions trash_input_0 = {dimensions, vectors};


    main_0(trash_input_0);

}




