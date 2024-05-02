#include "../../random_generator/random_custom.cpp"
#include "iostream"
#include "complex"
#include "2-dmain.h"
#include "vector"
#include "random"
#define lf long double
#define ulld unsigned long long int
#define lld long long int



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



key generate_public_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {
    dimensions = 2;
    for (ulld i=0;i<dimensions;i++) {

    }

}

key generate_private_key(vector<vector<lf>> spacebasevectors, ulld dimensions) {
    dimensions = 2;
    for (ulld i=0;i<dimensions;i++) {
        random_ulld(-2, 2);
    }
}


int main_2_d() {


}

