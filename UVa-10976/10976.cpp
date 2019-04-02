#include <iostream>
#include <map>

using namespace std;

int main(){

    int k, y;
    map<int, int, greater <int>> pairs;
    map<int, int>::iterator it;

    while(cin >> k){
        for(y=k+1;y<=2*k;y++){
            if ((k * y) % (y - k) == 0){
                //cout << "1/" << k << " = 1/" << (k * y) / (y - k) << " + 1/" << y << endl;
                pairs.insert({(k * y) / (y - k), y});               
            }
        }
        cout << pairs.size() << endl;
        for(it = pairs.begin();it!=pairs.end();++it){
            cout << "1/" << k << " = 1/" << it->first << " + 1/" << it->second << endl;
        }
        pairs.clear();
    }
                 

    return 0;
}