//
// Created by Administrator on 2024-05-03.
//
#include "vector"
#ifndef VECCTOR_ENCRYPT_2_DMAIN_H
#define VECCTOR_ENCRYPT_2_DMAIN_H

struct key {
    std::vector<long double> first;
    std::vector<long double> second;
};

struct information {
    key public_key;
    vector<vector<long double>> message_or_encryption;
};


#endif //VECCTOR_ENCRYPT_2_DMAIN_H
