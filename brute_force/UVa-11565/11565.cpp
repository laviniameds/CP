#include <iostream>

using namespace std;

int main(){

    int x, y, z, a, b, c, qtd_cases;
    bool yes = false;

    cin >> qtd_cases;
    while(qtd_cases--){
        cin >> a >> b >> c;
        for(x = -100; x <= 100 && !yes; x++){
            for(y = -100; y <= 100  && !yes; y++){
                for(z = -100; z <= 100 && !yes; z++){
                    if(x != y && x != z && z != y &&
                        x + y + z == a &&
                        x * y * z == b &&
                        x * x + y * y + z * z == c){
                            cout << x << ' ' << y << ' ' << z << endl;
                            yes = true;
                            break;
                        }
                }
            }
        }
        if(!yes)
            cout << "No solution." << endl;
        yes = false;
    }
    
    return 0;
}