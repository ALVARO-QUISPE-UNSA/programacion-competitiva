#include <bits/stdc++.h>
using namespace std;

string to_binary(int x) {
  string s;
  while(x > 0) {
    s += (x % 2 ? '1' : '0');
    x /= 2;
  }
  reverse(s.begin(), s.end());
  return s;
}

int main() {
  cout << "1000000000 = " << to_binary(1000000000) << endl; // 1101

  int x = 53;
  int y = 28;
  cout << "x = " << to_binary(x) << ", y = " << to_binary(y) << endl;

  cout << "AND, OR, XOR:" << endl;
  cout << to_binary(x & y) << " " << to_binary(x | y) << " " << to_binary(x ^ y) << endl;
  cout << ( x & y ) << " " << ( x | y ) << " " << ( x^y ) << '\n';
  for (int i = 0; i < 30; i++) 
    if ((x & (1 << i)) != 0)
      cout <<i << " ";
  cout << "\n";

  for (int i = 0; (1 << i) <= x; i++) 
    if (x & (1 << i))
      cout << i << " ";
  cout << '\n';
}
