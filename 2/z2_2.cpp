#include <iostream>

using namespace std;

int main()
{
    float s;
    cin>>s;
    auto x = 1.0;
    auto abs = x*x-s;
while (abs> 0.00001);
    x = (x * x + s) / 2. / x ;
    cout<<(x);
 }


