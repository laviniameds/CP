#include <iostream>
#include <set>
#include <iomanip>

using namespace std;

int main(){

    int n, y, x, cont=0, temp;
    set<int> s;
    set<int>::iterator it;
    bool ultimo = false;

    while(cin >> n, n){
        if(!ultimo)
            ultimo = true;
        else
            cout << endl;
        for(y = 1234; y <= 98765/n; y++){
            x = y * n; 
            temp = x;           
            if(temp < 10000)
                s.insert(0);
            while(temp){
                s.insert(temp%10); 
                temp /= 10;
            }

            temp = y; 
            if(temp < 10000)
                s.insert(0);
            while(temp){
                s.insert(temp%10); 
                temp /= 10;
            }
            
            // for(it = s.begin(); it != s.end(); ++it){
            //     cout << *it << " ";
            // }
            // cout << endl;

            if(s.size() == 10){
                cout << setw(5) << setfill('0') << x << " / "
                << setw(5) << setfill('0') << y << " = " << n << endl;
                cont++;
            }
            s.clear();
        }
        if(cont == 0)
            cout << "There are no solutions for " << n  <<"."<< endl;
        cont = 0;
    }
    

    return 0;
}