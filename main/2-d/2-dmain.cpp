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
#define MATRIX_LF std::vector<std::vector<long double>>
#define VECTOR_LF std::vector<long double>
#define MATRIX_CLF std::vector<std::vector<std::complex<long double>>>
#define VECTOR_CLF std::vector<std::complex<long double>>






using namespace std;

vector<lf> random_vector(lf inf, lf sup) {
    vector<lf> result;
    result.push_back(random_custom(inf, sup));
    result.push_back(random_custom(inf, sup));
    return result;
}


ulld random_ulld(ulld inf, ulld sup) {
    random_device rd;//시드값을위한 random_device 생성
    mt19937 gen(rd());//random_device를 통해 난수 생성 엔진을 초기화한다
    uniform_int_distribution<ulld> dis(inf, sup);//균등분포 정의
    auto result = (ulld) dis(gen);
    //printf("%s %llu\n","result_random : " ,result);
    return result;

}
lld random_lld(lld inf, lld sup) {
    random_device rd;//시드값을위한 random_device 생성
    mt19937 gen(rd());//random_device를 통해 난수 생성 엔진을 초기화한다
    uniform_int_distribution<lld> dis(inf, sup);//균등분포 정의
    auto result = (lld) dis(gen);
    //printf("%s %llu\n","result_random : " ,result);
    return result;

}


vector<vector<lf>> make_spacebase_vectors(ulld dimension) {
    dimension = 2;//일단 2차원이라 이렇게 함
    vector<lf> vector1;
    vector<lf> vector2;
    for (ulld i = 0;i<dimension;i++)
        vector1.push_back(random_custom(-100000, 100000));
    for (ulld i = 0;i<dimension;i++)
        vector2.push_back(random_custom(-100000, 100000));

    return {vector1, vector2};

}


key generate_private_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {
    dimensions = 2;
    vector<lf> vector1;
    vector<lf> vector2;
//    for (ulld i=0;i<dimensions;i++) {//나중에 차원 높아지면 아래거들 감마, 델타식으로 늘려서 계산하면됨
//        auto alpha = random_ulld(-2, 2);
//        auto beta = random_ulld(-2, 2);
//        vector1 = vector_scalar_times(spacebasevectors[i], alpha);
//}
    auto alpha = random_lld(-2, 2);
    auto beta = random_lld(-2, 2);
    vector1 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha), vector_scalar_times(spacebasevectors[1], beta), true);
    auto alpha_ = random_lld(-2, 2);
    auto beta_ = random_lld(-2, 2);
    vector2 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha_), vector_scalar_times(spacebasevectors[1], beta_), true);
    if ((vector1[0] / vector1[1]) == (vector2[0] / vector2[1]) || (vector1[0] / vector1[0]) == (vector2[0] / vector2[1]) * (-1) || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == 1 || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == -1) {//2차원으로 해서 이렇고 다차원으로 가면 for문으로 감
        generate_private_key(spacebasevectors, dimensions);
    }
    return {vector1, vector2};
}


key generate_public_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {//일단 모든 주의사항은 개인키와 동일
    dimensions = 2;
//    for (ulld i=0;i<dimensions;i++) {
//
//    }
    VECTOR_LF vector1;
    VECTOR_LF vector2;
    auto alpha = random_lld(-100000, 100000);
    auto beta = random_lld(-100000, 100000);
    vector1 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha), vector_scalar_times(spacebasevectors[0], beta), true);
    auto alpha_ = random_lld(-100000, 100000);
    auto beta_ = random_lld(-100000, 100000);
    vector2 = add_subtractv(vector_scalar_times(spacebasevectors[0], alpha_), vector_scalar_times(spacebasevectors[0], beta_),true);
    if ((vector1[0] / vector1[1]) == (vector2[0] / vector2[1]) || (vector1[0] / vector1[0]) == (vector2[0] / vector2[1]) * (-1) || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == 1 || (vector1[0] / vector1[1]) * (vector2[0] / vector2[1]) == -1) {//2차원으로 해서 이렇고 다차원으로 가면 for문으로 감
        generate_private_key(spacebasevectors, dimensions);
    }
    return {vector1, vector2};
}


int main_2_d() {


}

