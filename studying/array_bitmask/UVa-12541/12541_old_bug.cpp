#include <iostream>
#include <string>
#include <vector> 
#include <sstream>
using namespace std;

int main(){  
    int num;
    string line, oldest, youngest;
    vector<string> people_plus_dates;
    int year, month, day;
    cin >> num;

    while(getline(cin, line)){
        istringstream parse(line);
        people_plus_dates.push_back(line);
    }

    string aux = people_plus_dates.at(1);
    std::cout << aux;
    year = stoi(aux.substr(aux.length() - 4));
    std::cout << year;
    month = stoi(people_plus_dates.at(1).substr(2));
    day = stoi(people_plus_dates.at(1).substr(1));

    int max_date[] = {day, month, year};
    int min_date[] = {day, month, year};
    
    for(int i = 2; i<num+1;i++){
        year = stoi(people_plus_dates.at(i).substr(3));
        month = stoi(people_plus_dates.at(i).substr(2));
        day = stoi(people_plus_dates.at(i).substr(1));
        if(year > max_date[2]){
            max_date[0] = day;
            max_date[1] = month;
            max_date[2] = year;
            oldest = people_plus_dates.at(i).substr(0);
        }
        else if(year < min_date[2]){
            min_date[0] = day;
            min_date[1] = month;
            min_date[2] = year;
            youngest = people_plus_dates.at(i).substr(0);
        }
        else if(year == max_date[2]){
            if(month == max_date[1]){
                if(day < max_date[0]){
                    max_date[0] = day;
                    max_date[1] = month;
                    max_date[2] = year;
                    oldest = people_plus_dates.at(i).substr(0);                    
                }
            }
            else{
                if(month < max_date[1]){
                    max_date[0] = day;
                    max_date[1] = month;
                    max_date[2] = year;
                    oldest = people_plus_dates.at(i).substr(0); 
                }
            }         
        }
        else if(year == min_date[2]){
            if(month == min_date[1]){
                if(day < min_date[0]){
                    min_date[0] = day;
                    min_date[1] = month;
                    min_date[2] = year;
                    youngest = people_plus_dates.at(i).substr(0);                    
                }
            }
            else{
                if(month < min_date[1]){
                    min_date[0] = day;
                    min_date[1] = month;
                    min_date[2] = year;
                    youngest = people_plus_dates.at(i).substr(0); 
                }
            }         
        }
    }
    cout << youngest;
    cout << oldest;

    return 0;
}