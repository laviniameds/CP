#include <iostream>
#include <map>

using namespace std;



int main() {
  ios_base::sync_with_stdio(false);
  int galhos, qtd_pacotes, peso_galho, qtd_enfeites, peso_pacote;
  map<int, int> map_ep;
  map<int, int>::iterator m;

  cin >> galhos;
  while (galhos--) {
    cin >> qtd_pacotes >> peso_galho;
    while(qtd_pacotes--){
      cin >> qtd_enfeites >> peso_pacote;
      map_ep.insert(pair<int, int>(qtd_enfeites, peso_pacote));
    }

    // for( m = map_ep.begin(); m != map_ep.end(); m++ ){
    //     cout << m->first << " " << m->second << endl;
    // }
  }

  return 0;
}
