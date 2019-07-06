#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > m,dp;

int sum_dp(int n, int ini){
    if(dp[n][ini] != -1)
        return dp[n][ini];
    
    int sum = 0;
    if(n == 1)
        return dp[n][ini] = m[n][ini];

    for(int i=ini;i<(n+ini);++i)
        sum += m[n][i];

    return dp[n][ini] = sum+min(sum_dp(n-1, ini), sum_dp(n-1,ini+1));
}

int main() {

  int n;
  cin >> n;

  dp.resize(n+1);
  m.resize(n+1);

  for (int i=0; i<=n; i++)
    dp[i].resize(n+1,-1);

  for(int i=1;i<=n;i++){
    m[i].resize(n+1);
    for(int j=1;j<=n;j++)
        cin >> m[i][j];
  }

  cout << sum_dp(n, 1) << endl;

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++)
//         cout << m[i][j] << "  ";
//     cout << endl;
//   }

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++)
//         cout << dp[i][j] << "  ";
//     cout << endl;
//   }

  return 0;
}