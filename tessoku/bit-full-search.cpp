// ビット全探索
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, K, A[22];
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    bool answer = false;
    // 0~2^N-1の範囲でループ 全カードの表裏の組み合わせに等しい

    // for (int i = 0; i < (1 << N); i++)
    // {
    //     int sum = 0;
    //     for (int j = 1; j <= N; j++)
    //     {
    //         int wari = (1 << (j - 1));
    //         // 「整数 i の j 番目のビットが 1 かどうか」を判定する
    //         if ((i / wari) % 2 == 1)
    //             sum += A[j];
    //     }
    //     if (sum == K)
    //         answer = true;
    // }

    // ビットマスクを使った方法
    for (int i = 0; i < (1 << N); i++)
    {
        int sum = 0;
        for (int j = 1; j <= N; j++)
        {
            int mask = (1 << (j - 1));
            // cout << i << " & " << mask << ">" << ((i & mask) != 0) << endl;
            if ((i & mask) != 0) // フラグが立っているかは!=0で取れる
            {
                sum += A[j];
            }
        }
        if (sum == K)
            answer = true;
    }
    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
