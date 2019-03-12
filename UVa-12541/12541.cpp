#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main(){  
    int num;
    string oldest, youngest;
    int year, month, day;
    string word;

    cin >> num;
    string people_plus_dates[num][4];
    for(int i=0;i<num;i++){
        for(int j=0;j<4;j++){
            cin >> word;
            people_plus_dates[i][j] = word;
            //cout << i << ':' << j << word << '\n';
        }
        //cout << '\n';
    }

    // for(int i=0;i<num;i++){
    //     for(int j=0;j<4;j++){
    //         cout << people_plus_dates[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    year = stoi(people_plus_dates[0][3]);
    month = stoi(people_plus_dates[0][2]);
    day = stoi(people_plus_dates[0][1]);
    
    oldest = people_plus_dates[0][0];
    youngest = people_plus_dates[0][0];

    int max_date[] = {day, month, year};
    int min_date[] = {day, month, year};
    
    for(int i = 1; i<num;i++){
        year = stoi(people_plus_dates[i][3]);
        month = stoi(people_plus_dates[i][2]);
        day = stoi(people_plus_dates[i][1]);
        if(year > max_date[2]){
            max_date[0] = day;
            max_date[1] = month;
            max_date[2] = year;
            oldest = people_plus_dates[i][0];
        }
        else if(year < min_date[2]){
            min_date[0] = day;
            min_date[1] = month;
            min_date[2] = year;
            youngest = people_plus_dates[i][0];
        }
        else if(year == max_date[2]){
            if(month == max_date[1]){
                if(day < max_date[0]){
                    max_date[0] = day;
                    max_date[1] = month;
                    max_date[2] = year;
                    oldest = people_plus_dates[i][0];                    
                }
            }
            else{
                if(month < max_date[1]){
                    max_date[0] = day;
                    max_date[1] = month;
                    max_date[2] = year;
                    oldest = people_plus_dates[i][0]; 
                }
            }         
        }
        else if(year == min_date[2]){
            if(month == min_date[1]){
                if(day < min_date[0]){
                    min_date[0] = day;
                    min_date[1] = month;
                    min_date[2] = year;
                    youngest = people_plus_dates[i][0];                   
                }
            }
            else{
                if(month < min_date[1]){
                    min_date[0] = day;
                    min_date[1] = month;
                    min_date[2] = year;
                    youngest = people_plus_dates[i][0]; 
                }
            }         
        }
    }
    cout << oldest << "\n" << youngest << "\n";

    return 0;
}