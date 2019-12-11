#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using std::string;
using std::vector;

/* int HextoDec(char hex)
{
    int rslt = 0;
    rslt = (unsigned char)(hex) << 8;
    return rslt;
} */

int main()
{
    /* string s{"s:\\c\\ED"};
    std::cout << s << std::endl;
    for(auto &c : s)
    {
        if(c == '\\')
        {
            c = '\\';
        }
    }
    std::cout << s << std::endl; */

    /* char c1 = 0xc0;
    char c2 = 0x82;

    std::cout << static_cast<unsigned int>(c2) << std::endl; */

    /* int i = 2;
    double j = 1.1;
    std::cout << (i *= static_cast<int>(j)) << std::endl; */

    /* int grade;
    std::cin >> grade;
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;

    lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10]; */

    /* if (grade < 60)
    {
        lettergrade = scores[0];
    }
    else
    {
        lettergrade = scores[(grade - 50) / 10];
        if (grade % 10 > 7)
        {
            lettergrade += '+';
        }
        else if (grade % 10 < 3)
        {
            lettergrade += '-';
        }
    }
    std::cout << lettergrade << std::endl; */

    /* unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, _Cnt = 0, _tCnt = 0, _nCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, ch_before = '\0';
    while (std::cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            ++aCnt;
            break;
        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'i':
            if (ch_before == 'f')
            {
                ++fiCnt;
            }
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        case ' ':
            ++_Cnt;
            break;
        case '\t':
            ++_tCnt;
            break;
        case '\n':
            ++_nCnt;
            break;
        case 'f':
            if (ch_before == 'f')
            {
                ++ffCnt;
            }
            break;
        case 'l':
            if (ch_before == 'f')
            {
                ++flCnt;
            }
            break;
        }
        ch_before = ch;
    }
    std::cout << "Number of vowel a: \t" << aCnt << std::endl
              << "Number of vowel e: \t" << eCnt << std::endl
              << "Number of vowel i: \t" << iCnt << std::endl
              << "Number of vowel o: \t" << oCnt << std::endl
              << "Number of vowel u: \t" << uCnt << std::endl
              << "Number of ' ': \t\t" << _Cnt << std::endl
              << "Number of '\\t': \t" << _tCnt << std::endl
              << "Number of '\\n': \t" << _nCnt << std::endl
              << "Number of fi: \t" << fiCnt << std::endl
              << "Number of ff: \t" << ffCnt << std::endl
              << "Number of fl: \t" << flCnt << std::endl; */

    /* int ch;
    std::cin >> ch;
    switch (ch)
    {
    case 1:
        //string file_name;
        //int ival = 0;
        int jval;
        break;
    case 2:
        jval = 1;
        string file_name = "qqq";
        if (file_name.empty())
        {
            std::cout << "1" << std::endl;
        }
        std::cout << jval << std::endl;
        break;
    } */

    /* unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (std::cin >> ch)
    {
        if (ch == 'a')
        {
            ++aCnt;
        }
        if (ch == 'e')
        {
            ++eCnt;
        }
        if (ch == 'i')
        {
            ++iCnt;
        }
        if (ch == 'o')
        {
            ++oCnt;
        }
        if (ch == 'u')
        {
            ++uCnt;
        }
    }
    std::cout << "Number of vowel a: \t" << aCnt << std::endl
              << "Number pf vowel e: \t" << eCnt << std::endl
              << "Number pf vowel i: \t" << iCnt << std::endl
              << "Number pf vowel o: \t" << oCnt << std::endl
              << "Number pf vowel u: \t" << uCnt << std::endl; */

    // 无法输出多个次数相同的单词
    /* string word, word_most, word_before = {};
    int count = 1, count_most = 1;
    while (std::cin >> word)
    {
        if (word == word_before)
        {
            ++count;
        }
        else
        {
            count = 1;
            word_before = word;
        }
        if (count_most < count)
        {
            count_most = count;
            word_most = word_before;
        }
    }

    if (1 == count_most)
    {
        std::cout << "No word shows more than twice!" << std::endl;
        std::cout << word_most << std::endl;
    }
    else
    {
        std::cout << word_most << ":" << count_most << std::endl;
    } */

    /* vector<int> v2 = {0, 1, 2};
    vector<int> v1 = {0, 1, 1, 2, 3, 5, 8};

    if (v1.size() > v2.size())
    {
        vector<int> temp = v1;
        v1 = v2;
        v2 = temp;
    }

    auto beg1 = v1.begin();
    auto beg2 = v2.begin();
    for (; beg1 != v1.end(); ++beg1, ++beg2)
    {
        if (*beg1 != *beg2)
        {
            std::cout << "false!" << std::endl;
            return 0;
        }
    }

    std::cout << "true!" << std::endl; */

    // for (auto s : {1,2,3,4})
    // {
    //     std::cout << s << std::endl;
    // }

    /* string flag;
    do
    {
        std::cout << "Enter two strings:" << std::endl;
        string s1, s2;
        std::cin >> s1 >> s2;
        std::cout << "The shorter one is " << (s1.size() < s2.size() ? s1 : s2) << std::endl;
        std::cout << "Continue? yes or no : ";
        std::cin >> flag;
    } while (!flag.empty() && flag != "no"); */

    /* string word, word_before;
    bool flag = false;
    while (std::cin >> word)
    {
        if (word[0] <'A' || word[0] > 'Z')
        {
            word_before = word;
            continue;
        }

        if (word == word_before)
        {
            flag = true;
            break;
        }

        word_before = word;
    }
    if (flag)
    {
        std::cout << word << std::endl;
    } else
    {
        std::cout << "No duplicate words!" << std::endl;
    } */

    //begin:
    /* int sz;
    std::cin >> sz;
    if (sz <= 0)
    {
        //throw std::runtime_error("error!");
        try
        {
            throw std::runtime_error("error!");
            //goto begin;
        } catch (std::runtime_error err) {
            std::cout << err.what();
        }
    }
    std::cout << sz << std::endl; */


    return 0;
}

