#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, D;
    cin >> D >> N;
    int sumA[100009]; // 前日比
    int sumB[100009]; // 累積わ
    for (int i = 1; i <= N; i++)
    {
        int l, r;
        cin >> l >> r;
        sumA[l] += 1;
        sumA[r + 1] -= 1;
    }
    sumB[0] = 0;
    for (int i = 1; i <= D; i++)
    {
        sumB[i] = sumB[i - 1] + sumA[i];
    }
    for (int i = 1; i <= D; i++)
    {
        cout << sumB[i] << endl;
    }

    return 0;
}
