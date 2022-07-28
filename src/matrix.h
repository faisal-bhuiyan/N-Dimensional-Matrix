#pragma once

#include <string>
#include <vector>

namespace utils {
namespace matrix {

/*
 * A simple class to hold hardcoded 3x3 matrices to start things off.
 * We will expand upon this to create a general container for N-dim matrices.
 */
class Matrix {
public:
    Matrix();
    Matrix(const std::vector<double>&);

    inline size_t Size() const { return elems_.size(); }

    inline double operator[](size_t index) const { return elems_[index]; }
    inline double& operator[](size_t index) { return elems_[index]; }

    inline Matrix operator+(const Matrix& rhs) {
        Matrix result;
        for (size_t i = 0; i <= this->Size(); i++) {
            result[i] = this->elems_[i] + rhs[i];
        }
        return result;
    }

    inline Matrix operator*(const Matrix& rhs) {
        Matrix result;
        for (size_t i=0; i<3; i++) {
            for (size_t j=0; j<3; j++) {
                // multiply i-th row of this with j-th column of rhs
                result[3*i+j] = this->elems_[3*i] * rhs[j] +
                    this->elems_[3*i+1] * rhs[3*1+j] + this->elems_[3*i+2] * rhs[3*2+j];
            }
        }
        return result;
    }

private:
    std::vector<double> elems_;
};

} // namespace matrix
} // namespace utils

