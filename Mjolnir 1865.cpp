/*
    https://www.beecrowd.com.br/judge/pt/problems/view/1865
*/

#include <iostream>
using namespace std;

int main() {
  int C, forca;
  string nome;
  cin>> C;

  while(C!= 0){
    cin>> nome >> forca;  

    if(nome == "Thor")
      cout << 'Y' <<endl;
    else
      cout << 'N' <<endl;

    C--;
  }
  
  return 0;
}