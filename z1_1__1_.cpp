#include <iostream>
using namespace std;
char* itoa(int val, int base){
    
    static char buf[32] = {0};
    
    int i = 30;
    
    for(; val && i ; --i, val /= base)
    
        buf[i] = "0123456789abcdef"[val % base];
    
    return &buf[i+1];
    
}
int main() {
    int age;
    char *age_s;
    cin>>age;
    age_s=itoa(age,10);
    switch(age_s[1])
    {
        case '1': cout<<age<<' '<<"год"; break;
        case '2': cout << age <<' '<<"года"; break;
        case '3': cout << age <<' '<<"года"; break;
        case '4': cout << age <<' '<<"года"; break;
        default: cout<<age<<' '<<"лет"; break;
    }
    
    return 0;
}