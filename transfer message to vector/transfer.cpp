//
// Created by Backup on 2024-05-04.
//
#include "vector"
#include "iostream"
#include "cstring"
#include "cmath"
#include "complex"
#include "sstream"
#define VECTOR_LF std::vector<long double>
#define MATRIX_LF std::vector<std::vector<long double>>
#include "../random_generator/random_custom.cpp"


using namespace std;


std::string num_to_string(vector<unsigned long long int> vector1) {
    std::string result;
    for (unsigned long long int i = 0; i < vector1.size(); i++) {
        auto a = (long long int) vector1[i];

        unsigned char b = (unsigned long long int) a;
        result[i] = b;
    }
    return result;
}


std::vector<unsigned long long int> string_to_num(string string1) {
    std::vector<unsigned long long int> result;
    for (unsigned long long int i=0;i<string1.size();i++) {
        auto a = (char) string1[i];

        unsigned long long int b = (unsigned char) a;//ASCII transfer
        result[i] = b;
    }
    return result;
}


vector<long double> numbers_to_vector_lf(unsigned long long int a) {
    long double first = random_custom(0, a);
    vector<long double> result;
    result[0] = first;
    result[1] = a - first;
    return result;
}



MATRIX_LF s2v(string message) {
    MATRIX_LF result;
//    vector<string> message_vector;
//    istringstream message_split (message);
//    string splited;
//    while (getline(message_split,splited,'')) {
//        message_vector.push_back(splited);
//    }
    std::vector<unsigned long long int> vector1 = string_to_num(message);
    for (unsigned long long int i = 0; i < vector1.size(); i++) {
        result[i] = numbers_to_vector_lf(vector1[i]);
    }
    return result;
}

string v2s(std::vector<unsigned long long int> vector1) {
    return num_to_string(vector1);
}