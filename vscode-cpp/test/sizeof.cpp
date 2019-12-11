#include <iostream>
using namespace std;
class A {
  virtual void f() { cout << "f()" << endl; }
};
double b() {
  cout << "b()" << endl;
  return 1;
}
int main() {
  // A a;
  int c = 1;
  int *d = &c;
  cout << sizeof(d) << endl;
  string str;
  cout << sizeof(str) << endl;
}