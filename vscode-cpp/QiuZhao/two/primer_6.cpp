#include <iostream>

/* int fact(int val)
{
    int ret = 1;
    while (val > 1)
    {
        ret *= val--;
    }
    return ret;
} */

/* size_t count_calls(){
    static size_t ctr = 0;
    return ++ctr;
} */

/* void exNum(int *num1, int *num2){
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
} */

/* std::string::size_type find_char(const std::string &s, char c, std::string::size_type &counts)
{
    auto ret = s.size();
    counts = 0;
    for (decltype(ret) i = 0; i != s.size(); i++)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++counts;
        }
    }

    return ret;
} */

/* const std::string &manip()
{
    std::string ret = "aas";
    if (!ret.empty())
    {
        return ret;
    }
    else
    {
        return "Empty";
    }
} */

int &getNum(int *array, int index){
    return array[index];
}


int main(int argc, char *argv[])
{
    /* int j = fact(5);
    std::cout << j << std::endl; */

    /* for (size_t i = 0; i < 10; i++)
    {
        std::cout << count_calls() << std::endl;
    } */

    /* int num1 = 1, num2 = 2;
    exNum(&num1, &num2);

    std::cout << num1 << " - " << num2 << std::endl; */

    /* std::string::size_type ctr;
    auto index = find_char("stringstringstring", 'i', ctr);

    std::cout << index << " - " << ctr << std::endl; */

    /* std::string str;
    for (int i = 1; i < argc; i++)
    {
        str += argv[i];
        str += " ";
    }

    std::cout << str << std::endl; */

    int ia[10] = {1, 2, 3, 4, 5, 6, 6, 8, 9, 10};
    for (int i = 0; i != 10; ++i){
        getNum(ia, i) = i;
    }
    std::cout << ia[0] << std::endl;

    //int i = 1;
    //std::cout << ++i + i << std::endl;

    return 0;
}