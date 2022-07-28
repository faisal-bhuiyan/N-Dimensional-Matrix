#include "matrix.h"

namespace utils {
namespace matrix {

Matrix::Matrix() : elems_{ 0., 0., 0., 0., 0., 0., 0., 0., 0. } {
}

Matrix::Matrix(const std::vector<double>& elems) : elems_(elems) {
}

} // namespace matrix
} // namespace math

