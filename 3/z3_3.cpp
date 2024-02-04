#include <bits/stdc++.h>
using namespace std;
  
double findMedian(vector<int> a,int n)
{
    if (n % 2 == 0) {
           nth_element(a.begin(),
            a.begin() + n / 2,
            a.end());
        nth_element(a.begin(),
                    a.begin() + (n - 1) / 2,
                    a.end());
          return (double)(a[(n - 1) / 2]
                        + a[n / 2])
               / 2.0;
    }
    else {
        nth_element(a.begin(),
                    a.begin() + n / 2,
                    a.end());
        return (double)a[n / 2];
    }
}

int main()
{
    vector<int> arr = { 4, 1, 6, 8,
                        7, 5, 8, 6 };

    cout << "Медиана = "
         << findMedian(arr, arr.size())
         << endl;
    return 0;
}