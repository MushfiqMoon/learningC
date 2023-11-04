/*============



/*============
The zero matrix is:
0 0
0 0

Syntax:
| 0 0 |
| 0 0 |
============*/

// ===> the null matrix is indeed a type of zero matrix

/*============

The null matrix is:
0

Syntax:
| 0 |
============*/

#include <stdio.h>

int main()
{

    // Row Matrix
    int rowMatrix[1][4] = {{4, 9, 1, 6}};

    /*============
    The row matrix is: 4 9 1 6

    Syntax: ( 4 9 1 6 )
    ============*/

    // Column Matrix
    int columnMatrix[3][1] = {
        {5},
        {8},
        {2}};

    /*============
    The column matrix is:
    5
    8
    2

    Syntax:
    | 5 |
    | 8 |
    | 2 |
    ============*/

    // Zero Matrix OR Null Matrix
    int zeroMatrix[2][2] = {{0, 0}, {0, 0}};

    /*============
    The zero matrix is:
    0 0
    0 0

    Syntax:
    | 0 0 |
    | 0 0 |
    ============*/

    // Diagonal Matrix
    // ## always will be square matrix
    // ## only have diagonal values
    int diagonalMatrix[3][3] = {
        {3, 0, 0},
        {0, 6, 0},
        {0, 0, 9}};

    /*============
    The diagonal matrix is:
    3 0 0
    0 6 0
    0 0 9

    Syntax:     primary diagonal
    | 3 0 0 |
    | 0 6 0 |
    | 0 0 9 |

    Syntax:     secondart diagonal
    | 0 0 3 |
    | 0 6 0 |
    | 9 0 0 |
    ============*/

    // Scalar Matrix
    // ## always will be square matrix
    // ## diagonal values will be the same

    int scalarMatrix[3][3] = {
        {5, 0, 0},
        {0, 5, 0},
        {0, 0, 5}};

    /*============
    The scalar matrix is:
    5 0 0
    0 5 0
    0 0 5

    Syntax:     primary scalar
    | 5 0 0 |
    | 0 5 0 |
    | 0 0 5 |

    ============*/

    // Unit Matrix (Identity Matrix)
    // ## always will be square matrix
    // ## diagonal values will be only 1
    int unitMatrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    /*============
    The unit matrix is:
    1 0 0
    0 1 0
    0 0 1

    Syntax:
    | 1 0 0 |
    | 0 1 0 |
    | 0 0 1 |

    ============*/

    return 0;
}
