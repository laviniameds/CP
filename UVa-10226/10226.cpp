#include <iostream>
#include<istream>
#include <map>
#include <iomanip>
using namespace std;

int main(){  
    map<string,int> trees;
    map<string,int>::iterator it;
    int qtd_tests;
    double total=0, v;
    string line;

    cin >> qtd_tests;
    //qtd_tests++;
    getline(cin, line);
    getline(cin, line);
    while(qtd_tests--){
        while(getline(cin, line)){
            if (line.empty())
                break;

            auto t = trees.find(line);
            if(t != trees.end()){
                trees.insert({line, ++(t->second)});
            }
            else{
                trees.insert({line, 1});
            }
            total++;          
        }
        
        for(it = trees.begin(); it != trees.end(); it++ ){             
            v = (it->second/total)*100.00;            
            cout << it->first << " " << fixed << std::setprecision(4) << v << endl; 
        }  
        total=0; 
        trees.clear(); 
        if(qtd_tests >= 1)
            cout << endl;   
    }

    return 0;
}