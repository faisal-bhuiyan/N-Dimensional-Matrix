#include <cassert>
#include <iostream>

#include "matrix.h"

int main() {
    // A random matrix m1
    utils::matrix::Matrix m1(std::vector<double> {
        1., 2., 3.,
        4., 5., 6.,
        7., 8., 9.
    });

    assert(m1.Size() == 9);
    std::cout << "Size check for m1 complete!\n";

    assert(m1[0] == 1.);
    assert(m1[1] == 2.);
    assert(m1[2] == 3.);
    assert(m1[8] == 9.);
    std::cout << "Element check for m1 complete!\n";

    // A zero matrix m2
    utils::matrix::Matrix m2;

    assert(m2.Size() == 9);
    std::cout << "Size check for m2 complete!\n";

    assert(m2[0] == 0.);
    assert(m2[4] == 0.);
    assert(m2[8] == 0.);
    std::cout << "Element check for m2 complete!\n";

    // Let's add m1 and m2 and store the result into a new matrix m3
    auto m3 = m1 + m2;

    assert(m3.Size() == 9);
    std::cout << "Size check for m3 complete!\n";

    assert(m3[0] == 1.);
    assert(m3[1] == 2.);
    assert(m3[2] == 3.);
    assert(m3[8] == 9.);
    std::cout << "Element check for m3 complete!\n";

    // Let's add m1 with m1 and store the result into a new matrix m4
    auto m4 = m1 + m1;

    assert(m4.Size() == 9);
    std::cout << "Size check for m4 complete!\n";

    assert(m4[0] == 2.);
    assert(m4[1] == 4.);
    assert(m4[2] == 6.);
    assert(m4[8] == 18.);
    std::cout << "Element check for m4 complete!\n";

    // Let's multiply m1 and m2 and store the result into a new matrix m5
    auto m5 = m1 * m2;

    assert(m5.Size() == 9);
    std::cout << "Size check for m5 complete!\n";

    assert(m5[0] == 0.);
    assert(m5[1] == 0.);
    assert(m5[2] == 0.);
    assert(m5[8] == 0.);
    std::cout << "Element check for m5 complete!\n";

    // Let's multiply m1 and m1 and store the result into a new matrix m6
    auto m6 = m1 * m1;

    assert(m6.Size() == 9);
    std::cout << "Size check for m6 complete!\n";

    assert(m6[0] == 30.);
    assert(m6[1] == 36.);
    assert(m6[2] == 42.);
    assert(m6[3] == 66.);
    assert(m6[4] == 81.);
    assert(m6[5] == 96.);
    assert(m6[6] == 102.);
    assert(m6[7] == 126.);
    assert(m6[8] == 150.);
    std::cout << "Element check for m6 complete!\n";
}

