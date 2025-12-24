// O(n^2) solution
//  starting from point a, seeing which sum will be largest in the second loop
//  keep looking for the largest sum even if you found the largest sum and store it in best
//  2nd loop will handle when to stop because it will keep checking when the sum be the largest
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 10;
    int arr[n];
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        int sum = 0;
        for (int b = a; b < n; b++)
        {
            sum += arr[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}