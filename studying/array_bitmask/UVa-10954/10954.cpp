#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> seq, costs;
    int sum, qtd, n;
    while(cin >> qtd, qtd){
        while(qtd--){
            cin >> n;
            seq.push_back(n);
        }
        sort(seq.begin(), seq.end());
        sum = seq[0];
        for(int i=1;i<seq.size();i++){
            sum += seq[i];
            costs.push_back(sum);
        }
        sum=0;
        for(int i=0;i<costs.size();i++){
            sum += costs[i];
        }
        cout << sum << endl;
    }    
    return 0;
}
