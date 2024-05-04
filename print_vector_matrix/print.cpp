#include "vector"
#include "iostream"

void print(const std::vector<char>& a) {
    std::cout << "\t";
    for (char i : a) {
        std::string i_;
        i_ = i;
        std::cout << " " + i_;
    }
    std::cout  << std::endl;
}

void print(const std::vector<std::string>& a) {
    std::cout << "\t";
    for (const auto& i : a) {
        std::cout << " " + i;
    }
    std::cout << std::endl;
}
void print(const std::vector<char*>& a) {
    std::cout << "\t";
    for (const char* i : a) {
        std::printf(" %s", i);
    }
    std::cout << std::endl;
}


void print(const std::vector<int>& a) {
    std::cout << "\t";
    for (const int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<long int>& a) {
    std::cout << "\t";
    for (const long int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<long long int>& a) {
    std::cout << "\t";
    for (const long long int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<unsigned int>& a) {
    std::cout << "\t";
    for (const unsigned int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<unsigned long int>& a) {
    std::cout << "\t";
    for (const unsigned long int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}


void print(const std::vector<unsigned long long int>& a) {
    std::cout << "\t";
    for (const unsigned long long int i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<double>& a) {
    std::cout << "\t";
    for (const double i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<long double>& a) {
    std::cout << "\t";
    for (const long double i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<float>& a) {
    std::cout << "\t";
    for (const float i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}

void print(const std::vector<bool>& a) {
    std::cout << "\t";
    for (const bool i : a) {
        std::cout << " " + std::to_string(i);
    }
    std::cout  << std::endl;
}











void print(const std::vector<std::vector<std::string>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<std::string>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const std::string& j : i) {
            std::cout << " " + j;
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<char>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<char>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const char& j : i) {
            std::string j_;
            j_ = j;
            std::cout << " " + j_;
        }
        std::cout  << std::endl;
    }
}


void print(const std::vector<std::vector<char*>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<char*>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (char *j : i) {
            std::printf(" %s", j);
        }
        std::cout  << std::endl;
    }
}


void print(const std::vector<std::vector<int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<long int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<long int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const long int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<long long int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<long long int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const long long int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<unsigned int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<unsigned int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const unsigned int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<unsigned long int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<unsigned long int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const unsigned long int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<unsigned long long int>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<unsigned long long int>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const unsigned long long int& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}


void print(const std::vector<std::vector<double>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<double>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const double& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}


void print(const std::vector<std::vector<long double>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<long double>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const long double& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<float>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<float>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const float& j : i) {
            std::cout << " " + std::to_string(j);
        }
        std::cout  << std::endl;
    }
}

void print(const std::vector<std::vector<bool>>& matrix) {
    std::cout << std::endl;
    std::vector<std::vector<bool>> result;
    for (unsigned long long int i=0;i<matrix.size();i++) {
        for (unsigned long long int j = 0;j<matrix[0].size();j++) {
            result[i][j] = matrix[j][i];
        }
    }
    for (const auto & i : matrix) {
        std::cout << "\t";
        for (const bool& j : i) {
            if (j) {
                std::cout << " true";
            }
            else {
                std::cout << " false";
            }
        }
        std::cout  << std::endl;
    }
}