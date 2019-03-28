#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, pair<int, int>> cars;
    map<string, pair<int, int>>::iterator it;
    int t, d, q, l, h, value, cont;
    pair<int, int>pair;
    string m, car;

    cin >> t;
    while (t--) {
      cin >> d;
      while(d--){
        cin >> m;
        cin >> l;
        cin >> h;
        pair = make_pair(l, h);
        cars.insert({m, pair});
      }

      // for(it = cars.begin(); it != cars.end(); ++it){
      //   l = it->second.first;
      //   h = it->second.second;
      //   string car = it->first;
      //
      //   cout << car << " " << l << " " << h << endl;
      // }
      // cout << endl;

      cin >> q;
      while (q--) {
        cin >> value;
        //cout << value << endl;

        for(it = cars.begin(); it != cars.end(); ++it){
          l = it->second.first;
          h = it->second.second;
          car = it->first;

          //cout << car << " " << l << " " << h << endl;

          if(value >= l && value <= h){
            cout << car << endl;
            cont++;
          }
        }

        if(cont == 0)
          cout << "UNDETERMINED" << endl;
        cont = 0;
      }
      cars.clear();
    }

    return 0;
}
