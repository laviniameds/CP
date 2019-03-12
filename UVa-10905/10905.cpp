#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

bool compare(string x,string y){
    string a = x + y;
    string b = y + x;
    return a > b;
}

int main(){
    
    string numbers[50];
    int qtd_num, aux;
    string num;

    while(cin >> qtd_num, qtd_num){
        aux = qtd_num;
        for(int i=0;i<aux;i++){
            cin >> num;
            numbers[i] = num;
        }
        sort(numbers, numbers+aux, compare);
        for(int i=0;i<aux;i++)
            cout << numbers[i];
        
        cout << "\n";
    }

    return 0;
}