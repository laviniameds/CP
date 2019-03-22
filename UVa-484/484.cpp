#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    map<int,int> map;
    vector<int> vetor;
    int n;
    while (cin >> n){
      auto find = map.find(n);
      if(find != map.end()){
         //cout << "achou\n";
         find->second = ++(find->second);
         //cout << map.find(n)->first << ": " << map.find(n)->second << '\n';
      }
      else{
        //cout << "nao achou\n";
        map.insert(pair<int, int>(n, 1));
        vetor.push_back(n);
        //cout << map.find(n)->first << ": " << map.find(n)->second << '\n';
      }
    }
    for (int i = 0; i < vetor.size(); ++i){
        auto key = map.find(vetor[i]);
        cout << key->first << ' ' << key->second << '\n';
    }
    return 0;
}
