#include "../../random_generator/random_custom.cpp"
#include "iostream"
#include "complex"
#include "2-dmain.h"
#include "vector"
#include "random"
#include "cmath"
#define lf long double
#define ulld unsigned long long int
#define lld long long int
#include "../../vector_matrix_cal/vector_matrix_cals.cpp"
#include "../../transfer message to vector/transfer.cpp"
#define MATRIX_LF std::vector<std::vector<long double>>
#define VECTOR_LF std::vector<long double>
#define MATRIX_CLF std::vector<std::vector<std::complex<long double>>>
#define VECTOR_CLF std::vector<std::complex<long double>>


/* 여기에 있는 모든것은 2차원 기준이기 때문에
 * 차원을 높여서 할때는 잏반화를 시켜야함
 * 또한, 몇개는 이미 고차원을 베이스로 만들어졌음
 */



using namespace std;

vector<lf> random_vector(lf inf, lf sup) {
    vector<lf> result;
    result.push_back(random_custom(inf, sup));
    result.push_back(random_custom(inf, sup));
    return result;
}



//
//VECTOR_LF randomgeneratingforspacebasevectors(lf inf, lf sup, ulld dimension) {//2차원
//    VECTOR_LF vector;
//    for (ulld i = 0;i<dimension;i++) {
//        lf random1 = random_custom(inf, sup);
//        if (random1 < 1) {
//            vector.push_back(randomgeneratingforspacebasevectors(inf, sup, dimension));
//        }
//    }
//}


vector<vector<lf>> make_spacebase_vectors(ulld dimension) {
    dimension = 2;//일단 2차원이라 이렇게 함
    vector<lf> vector1;
    vector<lf> vector2;
    for (ulld i = 0;i<dimension;i++) {
        lf random1 = random_custom(-100000, 100000);
//        if (random1 < 1) {
//            make_spacebase_vectors(dimension);
//        }
        vector1.push_back(random1);
    }
    for (ulld i = 0;i<dimension;i++) {
        lf random2 = random_custom(-100000, 100000);
//        if (random2 < 1) {
//            make_spacebase_vectors(dimension);
//
//        }
        vector2.push_back(random2);
    }
    if ((vector1[0] / vector1[1]) == (vector2[0] / vector2[1]) || (vector1[0] / vector1[0]) == (vector2[0] / vector2[1]) * (-1)
    || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == 1 || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == -1) {//2차원으로 해서 이렇고 다차원으로 가면 for문으로 감
        make_spacebase_vectors(dimension);
    }
    return {vector1, vector2};

}
//
//
//key generate_private_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {//2차원
//    dimensions = 2;
//    vector<lf> vector1;
//    vector<lf> vector2;
////    for (ulld i=0;i<dimensions;i++) {//나중에 차원 높아지면 아래거들 감마, 델타식으로 늘려서 계산하면됨
////        auto alpha = random_ulld(-2, 2);
////        auto beta = random_ulld(-2, 2);
////        vector1 = vector_scalar_times(spacebasevectors[i], alpha);
//////}
////    auto alpha = random_lld(0, 1);
////    vector1 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha), vector_scalar_times(spacebasevectors[1], beta), true);
////    auto alpha_ = random_lld(-1, 1);
////    auto beta_ = random_lld(-1, 1);
////    vector2 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha_), vector_scalar_times(spacebasevectors[1], beta_), true);
////    if ((vector1[0] / vector1[1]) == (vector2[0] / vector2[1]) || (vector1[0] / vector1[0]) == (vector2[0] / vector2[1]) * (-1) || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == 1 || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == -1) {//2차원으로 해서 이렇고 다차원으로 가면 for문으로 감
////        generate_private_key(spacebasevectors, dimensions);
////    }
////    return {vector1, vector2};
////}
// 2024-05-04 AM 11:41 수정 : 비밀키를 좋은 벡터가 아닌 아예 기저벡터로 만듬

key generate_public_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {//일단 모든 주의사항은 개인키와 동일
    dimensions = 2;
//    for (ulld i=0;i<dimensions;i++) {
//
//    }
    VECTOR_LF vector1;
    VECTOR_LF vector2;
    auto alpha = random_lld(0, 100000);
    auto beta = random_lld(0, 100000);
    vector1 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha), vector_scalar_times(spacebasevectors[0], beta), true);
    auto alpha_ = random_lld(0, 100000);//1000 이하는 안되게
    auto beta_ = random_lld(0, 100000);// ""
    vector2 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha_), vector_scalar_times(spacebasevectors[0], beta_),true);
    if ((vector1[0] / vector1[1]) == (vector2[0] / vector2[1]) || (vector1[0] / vector1[0]) == (vector2[0] / vector2[1]) * (-1) || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == 1 || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == -1) {//2차원으로 해서 이렇고 다차원으로 가면 for문으로 감
        generate_public_key(spacebasevectors, dimensions);
    }
    return {vector1, vector2};
}





vector<ulld> decrypt(MATRIX_LF encrypted, const key& private_key) {//2차원
    MATRIX_LF for_result;
    MATRIX_LF result;
    MATRIX_LF vector_privatekey;
    for (ulld i =0;i<encrypted.size();i++) {
        MATRIX_LF vector_encrypted;
        vector_encrypted[0] = encrypted[i];
        vector_privatekey[0] = private_key.first;
        vector_privatekey[1] = private_key.second;
        for_result = matrix_timesv(inverse_matrix(vector_privatekey), vector_encrypted);
        result[i] = add_subtractv(vector_scalar_times(private_key.first, for_result[0][0]), vector_scalar_times(private_key.second,for_result[0][1]),
                      true);
    }
    vector<ulld> vector_to_ulld;
    for (ulld i=0;i<result.size();i++) {
        vector_to_ulld[i] = (ulld) (result[i][0] + result[i][1]);
    }
    return vector_to_ulld;
}

MATRIX_LF encrypt(MATRIX_LF message, const key& private_key) {//2차원
    MATRIX_LF result;
    for (ulld i = 0; i < message.size(); i++) {
        lf random1 = random_custom(-1 / 2, 1 / 2);
        lf random2 = random_custom(-1 / 2, 1 / 2);
        result[i] = add_subtractv(vector_scalar_times(private_key.first, message[i][0] + random1),
                                          vector_scalar_times(private_key.second, message[i][1] + random2),
                                          true);

    }
    return result;

}

information sending(string message, const key& private_key) {//2차원
    MATRIX_LF trash;
    trash[0] = private_key.first;
    trash[1] = private_key.second;
    return {generate_public_key(trash, 2), encrypt(s2v(message), private_key)};
}


string getting(const information& info, const key& private_key) {
    MATRIX_LF encrypted_message = info.message_or_encryption;
    vector<ulld> message = decrypt(encrypted_message, private_key);
    return v2s(message);
}



int main_2_d() {
    string message;
    cout << "What is your message?" << endl;
    cin >> message;
    key private_key;
    MATRIX_LF saves = make_spacebase_vectors(2);
    private_key.first = saves[0];
    private_key.second = saves[1];
    MATRIX_LF message_mlf = s2v(message);
    information info = sending(message, private_key);
    string decrypted_message = getting(info, private_key);
}

