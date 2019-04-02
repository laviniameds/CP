#include <iostream>
#include <deque>       
using namespace std;
int main(){  
    deque<int> dq;
    int num;

    while(cin >> num, num){
        int max = num;
        for(int i=1;i<=max;i++){
            dq.push_back(i);
        }

        if(dq.size() != 1)
            cout << "Discarded cards: ";
        else 
            cout << "Discarded cards:";
        while(dq.size() != 1){
            if(dq.size() == 2)
                cout << dq.front();
            else
               cout << dq.front() << ", ";            
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();            
        }
        cout << "\nRemaining card: " << dq.front() << "\n";
        dq.clear();
    }

    return 0;
}