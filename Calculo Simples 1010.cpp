/*
    https://www.beecrowd.com.br/judge/pt/problems/view/1010
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int cod1, cod2, quant1, quant2; 
  double valor1, valor2;

  cin >> cod1 >> quant1 >> valor1 >> cod2 >> quant2 >> valor2;

  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (quant1 * valor1) + (quant2 * valor2) << endl;

  return 0;
} 