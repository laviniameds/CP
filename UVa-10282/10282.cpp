#include <iostream>
#include <istream>
#include <map>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    map<string, string> dic;
    map<string, string>::iterator it;
    string line, f, s;
    int pos;

    while (getline(cin, line)){
        if (line.empty()) 
            break;  

        pos = line.find(' '); 
        f = line.substr(0, pos); 
        s = line.substr(pos+1);

        dic.insert({s, f});
    }

    while(getline(cin, line)){
        //cout << line << " ";
        it = dic.find(line);
        if(it != dic.end())
            cout << it->second << endl;
        else 
            cout << "eh" << endl;
    }   

    return 0;
}