#include <iostream>
#include <vector>

using namespace std;

int cds[20], target_sum, qtd_tracks, best_sum;
vector<int> best_tracks;

void comb(vector<int> tracks_temp, int sum, int i){
    sum += cds[i];
    tracks_temp.push_back(cds[i]);

    if(sum > best_sum || (sum == best_sum && tracks_temp.size() > best_tracks.size())){
        best_sum = sum;
        best_tracks = tracks_temp;
    }
    
    for(int j = i + 1; j < qtd_tracks; j++){
        if(sum + cds[j] <= target_sum)
            comb(tracks_temp, sum, j);
    }
}

int main(){

    while(cin >> target_sum){
        cin >> qtd_tracks;
        for(int i=0;i<qtd_tracks;i++){
            cin >> cds[i]; 
        }

        best_sum = 0;
        for(int i=0;i<qtd_tracks;i++){
            vector<int> tracks_temp;
            comb(tracks_temp, 0, i);
        }

        for(int i=0;i<best_tracks.size();i++)
            cout << best_tracks[i] << " ";       
        cout << "sum:" << best_sum << endl;
    }
    

    return 0;
}