/*
    https://www.beecrowd.com.br/judge/pt/problems/view/1011
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  double R, pi;
  pi = 3.14159;

  cin >> R;

  cout <<"VOLUME = " <<  fixed << setprecision(3) << (4/3.0) * pi  *(R*R*R) << endl;

  return 0;

} 