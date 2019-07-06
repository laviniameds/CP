#include <iostream>

using namespace std;

int main(){
    int q, n, s, t;
    cin >> q;
    while(q--){
        while (cin >> n >> s >> t){
            if(s < t){
                cout << (n - s) + 1 << endl;
            }
            else{
                cout << (n - t) + 1 << endl;
            }
        }
        
    }
    return 0;
}