#include <iostream>
#include <istream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> remove_special_char(string s){
    vector<string> v;
    string x;
    for(int i=0;i<s.length();i++){  
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            x.push_back(s[i]); 
        else{
            transform(x.begin(), x.end(), x.begin(), ::tolower);
            v.push_back(x);
            x.clear();
        }     
    }
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    v.push_back(x);

    return v;
}

int main(){
    set<string> words;
    set<string>::iterator it;
    vector<string> v;
    string str, new_str, f, s;
    int c=0, k=0, pos;
    char opa = 39;

    words.clear();
    while (cin, cin >> str){  
        if(str != "\n"){
            v = remove_special_char(str);
            for(int k=0;k<v.size();k++){
                new_str = v[k];
                words.insert(new_str);
            }
        }
    } 
    it = words.begin();
    advance(it, 1);
    while(it != words.end()){ 
        cout << *it << endl;
        ++it; 
    }  
    return 0;
}