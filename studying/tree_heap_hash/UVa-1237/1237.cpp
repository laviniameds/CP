#include <iostream>
#include <map>

using namespace std;

int main(){
    multimap<string, pair<int, int>> cars;
    multimap<string, pair<int, int>>::iterator it;
    multimap<string, pair<int, int>>::iterator last_it;
    int t, d, q, l, h, value, cont=0;
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
          //cout << car << " " << l << " " << h << endl;

          if(value >= l && value <= h){
            last_it = it;
            cont++;
          }
        }
        //cout << cont << endl;
        if(cont == 1)
          cout << last_it->first << endl;
        else
          cout << "UNDETERMINED" << endl;
        cont = 0;
      }
      cars.clear();
      if(t > 0)
        cout << endl;
    }

    return 0;
}
