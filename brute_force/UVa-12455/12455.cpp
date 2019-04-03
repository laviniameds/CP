#include <iostream>

using namespace std;

bool hasSum(int bars[], int qtd_bars, int l) { 
    if (l == 0) 
        return true; 
    if (qtd_bars == 0 && l != 0) 
        return false; 
  
    if (bars[qtd_bars-1] > l) 
        return hasSum(bars, qtd_bars-1, l); 

    return hasSum(bars, qtd_bars-1, l) || hasSum(bars, qtd_bars-1, l-bars[qtd_bars-1]); 
} 

int main(){

    int bars[20];
    int lenght, qtd_bars, qtd_tests, b;
    bool yes;

    cin >> qtd_tests;
    while(qtd_tests--){
        cin >> lenght;
        cin >> qtd_bars;
        for(int i=0; i < qtd_bars; i++){
            cin >> b;
            bars[i] = b;
        }

        yes = hasSum(bars, qtd_bars, lenght);

        if(yes)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }       

    return 0;
}