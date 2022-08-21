/*
    https://www.beecrowd.com.br/judge/pt/problems/view/1009
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string nome;
  double salario, vendas, comissao;
   
  cin >> nome >> salario >> vendas;
  comissao = vendas*0.15;

  cout<< "TOTAL = R$ " << fixed<< setprecision(2) << salario + comissao << endl;

  return 0;

} 