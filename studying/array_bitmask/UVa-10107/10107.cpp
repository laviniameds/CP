#include <iostream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
int main(){  
    vector<int> array_num;
    int num, i = 0, sum = 0;
    while (cin >> num){
        i++;
        array_num.push_back(num);
        sort(array_num.begin(), array_num.end());
        if(i>2){
            if(i%2 == 0){
                sum = array_num.at(i/2) + array_num.at((i/2)-1);
                cout << sum/2;
            }
            else
                cout << array_num.at(i/2);            
        }
        else{
            if(i == 1)
                cout << array_num.at(0);
            else{
                sum = array_num.at(0) + array_num.at(1);
                cout << sum/2;
            }            
        }
        cout << '\n';
    }

    return 0;
}