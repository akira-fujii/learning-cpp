// 二部探索
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[100009];
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    sort(A + 1, A + N + 1); // 範囲指定ソート
    int m = N / 2;

    int l = 1, r = N;
    while (l <= r)
    {
        int index = (l + r) / 2;
        int n = A[index];
        if (n == X)
        {
            cout << index << endl;
            break;
        }
        // 1 2 3 4 10 20 30 40
        if (n > X)
        {
            r = index - 1;
        }
        if (n < X)
        {
            l = index + 1;
        }
    }

    return 0;
}
