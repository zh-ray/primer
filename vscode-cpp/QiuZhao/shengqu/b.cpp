#include <iostream>
using namespace std;

static int a = 0;
class A
{
public:
 A()
 {
  cout<<a++;
 }
};
int main(  )
{
    int n;
    cin >> n;
    A *arr = new A[n + 1];
    return 0;
}