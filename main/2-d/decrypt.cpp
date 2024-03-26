#include "vector_sources.h"
#include "vector_calculate.cpp"
#include "get_public_key.cpp"
#include "transfer.cpp"
#include "cmath"

result_find decrypt(public_key publicKey, private_key privateKey) {
    long double x_now = (publicKey.key.first.x * publicKey.first_vector_times) + (publicKey.key.second.x * publicKey.second_vector_times);
    long double y_now = (publicKey.key.first.y * publicKey.first_vector_times) + (publicKey.key.second.y * publicKey.second_vector_times);
    vectors_orthogonal now = {x_now, y_now};
    vectors_polar vectorpolar_1 = transfer_o2p(privateKey.key.first);
    vectors_polar vectorpolar_2 = transfer_o2p(privateKey.key.second);
    vectors_polar vectorpolar_0 = transfer_o2p(now);
    if (vectorpolar_1.seta >= vectorpolar_2.seta) {
        long double transfer_x = vectorpolar_0.radius * cosl(vectorpolar_0.seta - vectorpolar_2.seta);
        long double transfer_y = vectorpolar_0.radius * cosl(vectorpolar_1.seta = vectorpolar_0.seta);
        long double result_x = transfer_x / vectorpolar_2.radius;
        long double result_y = transfer_y / vectorpolar_1.radius;
        auto last_result_x = (long long int) floorl(result_x + (1/2));
        auto last_result_y = (long long int) floorl(result_y + (1/2));
        return {last_result_x, last_result_y};
    }
    else {
        long double transfer_x = vectorpolar_0.radius * cosl(vectorpolar_0.seta - vectorpolar_1.seta);
        long double transfer_y = vectorpolar_0.radius * cosl(vectorpolar_2.seta = vectorpolar_0.seta);
        long double result_x = transfer_x / vectorpolar_1.radius;
        long double result_y = transfer_y / vectorpolar_2.radius;
        auto last_result_x = (long long int) floorl(result_x + (1/2));
        auto last_result_y = (long long int) floorl(result_y + (1/2));
        return {last_result_x, last_result_y};

    }


}
