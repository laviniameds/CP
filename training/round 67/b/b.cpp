#include <iostream>
#include <istream>
//#include <string>
using namespace std;

int main()
{
    string str, str2, w;
    int n, q, f, cont;
    cin >> n;
    cin >> str;
    str2 = str;
    q = n;
    while (q--){
        cin >> f;
        cin >> w;
        cont = 0;
        for (int i = 0; i < w.size(); i++){
            for (int j = 0; j < n; j++){
                if (str[j] == '1')
                    break;
                if (w[i] == str[j]){
                    str[j] == '1';
                    cont++;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}