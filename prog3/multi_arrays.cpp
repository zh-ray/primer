#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    /* int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    int arr[10][20][30] = {0};
    ia[2][3] = arr[0][0][0];
    cout << ia[2][3] << endl;

    int (&row)[4] = ia[1];
    cout << *row << endl; */

    /* constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i != rowCnt; ++i) {
        for (size_t j = 0; j != colCnt; ++j) {
            ia[i][j] = i * colCnt + j;
        }
    }

    for (const auto &row : ia) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    //cout << endl; */

    /* int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    int (*p)[4] = ia;
    for (const auto &row : ia) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << **p << endl;

    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }

    for (auto p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }

    using int_array = int[4];
    typedef int int_array[4];
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    } */

    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (int (&p)[4] : ia) {
        for (int q : p) {
            cout << q << ' ';
        }
        cout << endl;
    }

    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j) {
            cout << ia[i][j] << ' ';
        }
        cout << endl;
    }

    for (int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    //typedef int refer_array[4];
    using refer_array = int[4];
    for (refer_array &p : ia) {
        for (int q : p) {
            cout << q << ' ';
        }
        cout << endl;
    }  

    for (refer_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}