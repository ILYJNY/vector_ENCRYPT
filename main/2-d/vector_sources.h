//
// Created by Backup on 2024-03-23.
//

#ifndef UNTITLED2_VECTOR_SOURCES_H
#define UNTITLED2_VECTOR_SOURCES_H
#define dimension 2

struct vectors_orthogonal {
    long double x;
    long double y;
};


struct vectors_polar {
    long double seta;
    long double radius;
};


struct keys {
    vectors_orthogonal first;
    vectors_orthogonal second;
};

struct public_key {
    keys key;
    long long int first_vector_times;
    long long int second_vector_times;
};

struct private_key {
    keys key;
};


struct result_find {
    long long int x;
    long long int y;
};



#endif //UNTITLED2_VECTOR_SOURCES_H
