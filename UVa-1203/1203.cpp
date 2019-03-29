#include <iostream>
#include<istream>
#include <algorithm> 
#include <map>

using namespace std;

int main(){
    map<int, int> m;
    map<int, int>::iterator it;
    string s, q_num, period;
    int k, secs=0, temp;
    
    while(cin >> s, s != "#"){
        if(s == "Register"){
            cin >> q_num;
            cin >> period;
            m.insert({stoi(period), stoi(q_num)});
        }
    }
    cin >> k;
    secs = m.begin()->first;
    while(k != 0){
        for(int i=0;i<m.size();i++){
            if(secs % m.find(i)->first == 0){
                cout << m.find(i)->second << endl;
                k--;
            }
        }
        secs += temp-secs; 
        //second++;       
    }

    return 0;
}