#include <iostream>
using namespace std;
int main(){
    int number_col, i, total, media, min, cont = 1, array_qtd_blocks[50];
    while (cin >> number_col, number_col){
        i = number_col;
        total = 0;
        while (i--){
            cin >> array_qtd_blocks[i];
            total += array_qtd_blocks[i];
        }
        media = total / number_col;
        min = 0;
        for (i = 0; i < number_col; ++i){
            if (array_qtd_blocks[i] > media)
                min += (array_qtd_blocks[i] - media);
        }
        cout << "Set #" << cont++ << endl;
        cout << "The minimum number of moves is " << min << ".\n\n";
    }
    return 0;
}