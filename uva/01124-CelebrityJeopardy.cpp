#include <string>
#include<iostream>
using namespace std;
int main() {
  string a;
  while (getline(cin, a))
    cout << a << '\n';
  return 0;
}

