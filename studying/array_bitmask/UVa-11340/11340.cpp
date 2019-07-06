#include <iostream>
#include<istream>
#include <map>
#include <iomanip>
using namespace std;

int main(){  
    map<char,int> values;
    int qtd_tests, qtd_symb, qtd_lines_text;
    double cost, sum=0;
    string c;

    cin >> qtd_tests;
    while(qtd_tests--){
        cin >> qtd_symb;
        //cout << qtd_symb << "\n";
        for(int i=0;i < qtd_symb;i++){
            cin >> c;
            cin >> cost;
            values[c[0]] = cost;
            //cout << values.find(c[0])->first << " " << values.find(c[0])->second << "\n";
        }
        cin >> qtd_lines_text;
        qtd_lines_text++;
        string line;
        
        while(qtd_lines_text--){
            //cout << qtd_lines_text << "\n";
            getline(cin, line);
            //cout << line << "\n";
            for(int j=0;j<line.size();j++){
                char k = line[j];
                if(values.find(k)->first){
                    double v = values.find(k)->second;
                    if(v > 0 && v <100)
                        sum += (v * 0.01);
                    else
                        sum += (v/100.0);
                    //cout << "char: " << k << " value: " << v << " sum: " << sum << "\n";
                }
            }
        }
        cout << fixed << std::setprecision(2)  << sum << "$" << endl;

        sum=0;
        values.clear();
    }

    return 0;
}