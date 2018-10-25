#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main()
{
    /* int arr[10] = {};
    int arr_c[10] = {};
    for (size_t ix = 0; ix != 10; ++ix) {
        arr[ix] = ix;
    }

    for (auto a : arr) {
        arr_c[a] = a;
    }

    for (auto i : arr_c) {
        cout << i << " ";
    }
    cout << endl; */

    /* vector<int> ivec;
    vector<int> ivec_c;
    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
        ivec.push_back(ix);
    }
    // for (auto i : ivec) {
    //    ivec_c.push_back(i); 
    // }
    ivec_c = ivec;
    for (auto v : ivec_c) {
        cout << v << " ";
    }
    cout << endl; */

    /* unsigned scores[11];
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }
    for (auto s : scores) {
        cout << s << " ";
    }
    cout << endl; */

    /* string nums[] = {"one", "two", "three"};
    string *p = &nums[0];
    string *p2 = nums;
    *p2 = "zero";
    cout << *p << " " << *p2 << endl;
    for (auto n : nums) {
        cout << n << " ";
    }
    cout << endl;
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    auto ia2(ia);
    *ia2 = 42;
    for (auto i : ia) {
        cout << i << " ";
    }
    decltype(ia) ia3 = {0,1,2,3,4,5,6,7,8,9};
    //ia3 = p;
    ia3[4] = 42; */

    /* int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = arr;
    cout << *p << endl;
    ++p;
    cout << *p << endl;
    int *e = &arr[10];
    for (int *b = arr; b != e; ++b) {
        cout << *b << endl;
    } */

    /* int arr[] = {0,9,9};
    int *pbeg = begin(arr), *pend = end(arr);
    while (pbeg != pend && *pbeg >= 0) {
        ++pbeg;
    }
    if (pbeg == pend) {
        cout << "No negative number!" << endl;
    } else {
        cout << *pbeg << endl;
    } */

    /* constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *b = begin(arr), *e = arr + sz;
    while (b < e) {
        cout << *b << endl;
        ++b;
    } */

    /* int ia[] = {0,2,4,6,8};
    int i = ia[2];
    int *p = ia;
    i = *(p + 2);
    p = &ia[2];
    int j = p[1];
    int k = p[-2];
    cout << i << *p << j << k << endl; */

    /* int arr[] = {1,2,3,4,5,6,0,7,8,9};
    for (int *p = arr; p != end(arr); ++p) {
        *p = 0;
    }
    for (auto a : arr) {
        cout << a << " ";
    }
    cout << endl; */

    /* int arr1[] = {0,1,2,3,4,5,6,7,8,9};
    int arr2[] = {0,1,2,3,4,5,6,7,8,9};
    int *b1 = begin(arr1), *b2 = begin(arr2), *e1 = end(arr1), *e2 = end(arr2);
    if ((e1 - b1) != (e2 - b2)) {
        cout << "arr1.length != arr2.length !" << endl;
        return 0;
    }
    for (b1, b2; b1 != e1; ++b1, ++b2) {
        if (*b1 != *b2) {
            cout << "arr1 != arr2 !" << endl;
            return 0;
        }
    }
    cout << "arr1 == arr2 !" << endl; */

    /* vector<int> vec1 = {0,1,2,3,4,5,6,7,8,9};
    vector<int> vec2 = {0,1,2,3,4,5,6,7,8,9};
    if (vec1 == vec2) {
        cout << "vec1 == vec2 !" << endl;
    } else {
        cout << "vec1 != vec2 !" << endl;
    } */

    /* char ca[] = {'C', '+', '+', '\0'};
    char ca2[] = {'J', 'a', 'v', '\0'};
    char ca1[] = "char1";
    char ca3[] = "char434";
    strcat(ca1, ca3);
    cout << ca3 << endl;
    cout << ca1 << endl;   
    
    cout << strlen(ca3) << endl; */

    /* const char ca[] = {'h', 'e', 'l', 'l', 'o', '1', '2', '3'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    } */

    /* string str1 = "a sample";
    string str2 = "a sample";
    if (str1 < str2) {
        cout << "str1 < str2" << endl;
    } if (str1 == str2) {
        cout << "str1 == str2" << endl;
    } else {
        cout << "str1 > str2" << endl;
    }

    const char ca1[] = "a sample";
    const char ca2[] = "A sample";
    if (strcmp(ca1, ca2) > 0) {
        cout << "ca1 > ca2" << endl;
    } if (strcmp(ca1, ca2) == 0) {
        cout << "ca1 == ca2" << endl;
    } if (strcmp(ca1, ca2) < 0) {
        cout << "ca1 < ca2" << endl;
    } */

    /* const char cha1[] = "This is a ";
    const char cha2[] = "new sentence.";
    char sum[20];
    strcpy(sum, cha1);
    strcat(sum, cha2);
    cout << sum << endl; */

    string s("Hello world");
    const char *cha = s.c_str();
    s = "1";
    cout << cha << endl;

    return 0;
}