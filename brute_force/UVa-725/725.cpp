#include <iostream>
#include <set>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

    int n, y, x, c=0, cont=0, temp;
    set<int> s;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    while(cin >> n, n){
        for(y = 1234; y <= 98765/n; y++){
            x = y * n; 
            temp = (y < 10000);         
            temp = x;
            while(temp){
                array[temp%10] = -1; 
                temp /= 10;
            }
            temp = y; 
            while(temp){
                array[temp%10] = -1; 
                temp /= 10;
            }

            for(int i=0;i<10;i++){
                if(array[i] != -1){
                    c++;
                }
            }

            if(c == 0){
              cout << setw(5) << setfill('0') << x << " / "
              << setw(5) << setfill('0') << y << " = " << n << endl; 
              cont++;             
            }

            c=0;
            for(int i=0;i<10;i++){
                array[i] = i;
            }

            //cout << s.size() << endl;
            // if(s.size() == 10){
            //     cout << setw(5) << setfill('0') << x << " / "
            //     << setw(5) << setfill('0') << y << " = " << n << endl;
            //     count++;
            // }
            // s.clear();
        }
        if(cont == 0)
            cout << "There are no solutions for " << n  <<"."<< endl;
        cont = 0;
        cout << endl;
    }
    

    return 0;
}