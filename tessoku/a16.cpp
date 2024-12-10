// 動的計画法
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, A[100009], B[100009];
    int dp[100009];
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        cin >> A[i];
    }
    for (int i = 3; i <= N; i++)
    {
        cin >> B[i];
    }

    // 各部屋に移動する最短時間
    dp[1] = 0;
    dp[2] = A[2];

    for (int i = 3; i <= N; i++)
    {
        // 2個まえの部屋から来るのと、1つ前の部屋から来るのとどっちが早いか考える
        dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }
    cout << dp[N] << endl;
    return 0;
}
