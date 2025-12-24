#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int best = 0, sum = 0;
    int n = 10;
    int arr[n];
    for (int a = 0; a < n; a++)
    {
        sum = max(arr[a], sum + arr[a]);
        best = max(best, sum);
    }
    cout << best << "\n";
}