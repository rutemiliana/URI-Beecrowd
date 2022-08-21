/*
    https://www.beecrowd.com.br/judge/pt/problems/view/3302
*/

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  int tentativa[x];
  
  for(int i = 0; i  < x ; i++){
    cin >> tentativa[i];
  }

  for(int i = 0; i  < x ; i++){    
    cout << "resposta " << (i + 1) << ": " << tentativa[i] << endl;
  }
  
  return 0;
}
