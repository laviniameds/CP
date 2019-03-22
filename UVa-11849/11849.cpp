#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> cds_jack;
    int qtd_jack, qtd_jill, cd, count = 0;
    while(cin >> qtd_jack >> qtd_jill, qtd_jack && qtd_jill){
        while(qtd_jack--){
            cin >> cd;
            cds_jack.insert(cd);
        }
        while(qtd_jill--){
            cin >> cd;
            if(cds_jack.find(cd) != cds_jack.end())
                count++;           
        }
        cout << count << "\n";
        count = 0;
        cds_jack.clear();
    }    
    return 0;
}
