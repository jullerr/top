#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n, k = 0;
    int max = numeric_limits<int>::min();
    int a[100];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > max){
                max = a[i];
            }
        }
        for (int i = 0; i < n; i++) {
        if (a[i] == max){
                 k++;
            }
        }
        cout << max << " " << k+1;
}