// O(n^3) solution
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 10;
    int best = 0;
    int arr[n];
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum = 0;
            for (int c = a; c <= b; c++)
            {
                sum += arr[c];
            }
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}