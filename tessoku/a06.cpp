#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N, A[100009];
    int Q, B[100009];
    vector<vector<int>> questions(100009);

    cin >> N >> Q;
    // 何日目
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    // question
    for (int i = 1; i <= Q; i++)
    {
        vector<int> n(2);
        cin >> n[0] >> n[1];
        questions[i] = n;
    }
    // 累積和
    B[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        B[i] = A[i] + B[i - 1];
        // cout << A[i] << "," << B[i] << endl;
    }

    // 答える
    for (int i = 1; i <= Q; i++)
    {
        int l = questions[i][0];
        int r = questions[i][1];
        cout << (B[r] - B[l - 1]) << endl; // 該当の日から1日前までの累積を引くので注意 l - 1
    }

    return 0;
}
