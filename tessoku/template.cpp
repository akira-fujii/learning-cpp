#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int answer = 0;
    sort(A.begin(), A.end());
    int prev = A[0];
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
        // if (A[i] - prev > 1)
        // {
        //   answer = A[i] + 1;
        //   break;
        // }
        // prev = A[i];
    }
    cout << answer << endl;
}
