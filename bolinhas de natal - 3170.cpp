/*
    https://www.beecrowd.com.br/judge/pt/problems/view/3170
*/

#include<bits/stdc++.h>
using namespace  std;

int main() {
  int G, B,  bolasNecessarias, comprar;

  cin >> B >> G;
  
  if ( G % 2 != 0 ){
    G--;
  }

  bolasNecessarias = G/2;
  comprar = bolasNecessarias - B;

  if (comprar > 0){
    cout << "Faltam " <<   comprar << " bolinha(s)" << endl;
  } else {
    cout <<"Amelia tem todas bolinhas!" << endl;
  }

  return 0;

}