#include <iostream>
#include <algorithm>

using namespace std;

// 0 1 2
// 3 4 5
// 6 7 8

int main(){
    int array1[3], array2[3], array3[3], maior[3];
    int n, i;

    while(cin >> n){
        array1[0] = n;
        maior[0] = n;
        for(i=1; i<3;i++){
            cin >> n;
            array1[i] = n;
            if(n > maior[0]){
                maior[0] = n;
            }
        }

        for(i=0; i<3;i++){
            cin >> n;
            array2[i] = n;
            if(n > maior[1]){
                maior[1] = n;
            }
        }

        for(i=0; i<3;i++){
            cin >> n;
            array3[i] = n;
            if(n > maior[2]){
                maior[2] = n;
            }
        }

        sort(maior, maior+3);
        for(int i=0;i<3;i++){
            
        }

        // cout << maior[0] << " : " << ind_1 << endl;
        // cout << maior[1] << " : " << ind_2 << endl;
        // cout << maior[2] << " : " << ind_3 << endl;
        

    }


    return 0;
}