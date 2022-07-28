# N-dimensional-Matrix
This is a basic N-dimensional matrix library implemented in C++. Based off the problem presented in Chapter 29 of [The C++ Programming Language, 4th Edition](https://www.stroustrup.com/4th.html).

## Design Requirements
We have the following requirements:
- N dimensions, where N is a parameter that can vary from 0 to many, without specialized code for every dimension.
- N-dimensional storage is useful in general, so the element type can be anything we can store (like a vector element).
- The mathematical operations should apply to any type that can reasonably be described as a number, including a Matrix.
- Fortran-style subscripting using one index per dimension, for example, `m(1,2,3)` for a 3-D Matrix, yielding an element.
- C-style subscripting, for example, `m[7]`, yielding a row (a row is an `N−1-D` sub-Matrix of an `N-D` Matrix).
- Subscripting should be potentially fast and potentially range checked.
- Move assignment and move constructor to ensure efficient passing of Matrix results and to eliminate expensive temporaries.
- Some mathematical matrix operations, such as `+` (addition) and `∗=` (multiplication).
- A way to read, write, and pass around references to submatrices, Matrix_refs, for use for both reading and writing elements.
- The absence of resource leaks in the form of the basic guarantee.
- Fused critical operations, for example, `m∗v+v2` as a single function call.
