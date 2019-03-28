#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <math.h>

using namespace std;

int get_sum(int n, int *v, int tam){
  int dif = abs(n-(v[0]+v[1])), new_dif, sum=v[0] + v[1];

  for(int i=0; i<tam; i++){
    for(int j=i+1; j<tam; j++){
      new_dif = abs(n -(v[i] + v[j]));
      //cout << new_dif << " (" << v[i] << "+" << v[j] << ") - ";
      if(new_dif < dif){
          dif = new_dif;
          sum = v[i] + v[j];
          //cout << endl << "new_diff is now " << sum << endl;
      }
    }
  }
  //cout << endl;
  return sum;
}

int main(){
    int v[1000];
    std::vector<int> queries;
    int qtd, n, cont=1, sum=0, value, qtd_cases;

    //sort(v, v+qtd);

    // for(int i=0; i<qtd;i++){
    //   std::cout << v[i] << " " << '\n';
    // }

    while(cin >> n, n != 0){
      qtd = n;
      for(int i=0; i<qtd;i++){
        cin >> n;
        v[i] = n;
      }
      cout << "Case " << cont++ <<":" << "\n";
      cin >> qtd_cases;
      while(qtd_cases--){
        cin >> value;
        sum = get_sum(value, v, qtd);
        cout << "Closest sum to " << value << " is " << sum << "." << "\n";
      }
    }

    return 0;
}
