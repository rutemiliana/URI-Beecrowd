/*
    https://www.beecrowd.com.br/judge/pt/problems/view/1012
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B , C, pi;
  pi = 3.14159;
  cin >> A >> B >> C;

  cout << fixed << setprecision(3);

  cout << "TRIANGULO: " <<  (A*C) / 2 << endl;
  cout << "CIRCULO: " <<  pi * (C*C) << endl;
  cout << "TRAPEZIO: " <<  ( (A+B) * C) / 2 << endl;
  cout << "QUADRADO: " <<  B * B << endl;
  cout << "RETANGULO: " <<  A * B << endl;

  return 0;
}