// 全探索
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int cnt = 0;

    // 赤
    for (int j = 1; j < N + 1; j++)
    {
        // 青
        for (int k = 1; k < N + 1; k++)
        { //  1 <= 合計 - red - blue <= Nなら良い
            int white = K - j - k;
            if (1 <= white && white <= N)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
