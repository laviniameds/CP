#include <iostream>
using namespace std;

int main(){  
    int qtd, values[4], v, contestant[101][10];
    cin >> qtd;
    while(qtd--){
        while(cin >> v){
            values[0] = v;
            for(int i=1;i<4;i++){
                cin >> v;
                values[i] = v;
            }
            if(values[3] == 'I'){
                contestant[values[0]][values[1]] += -values[2];
            }
            else if(values[3] == 'C'){
                contestant[values[0]][values[1]] += values[2];
            }
        }
    }

    return 0;
}