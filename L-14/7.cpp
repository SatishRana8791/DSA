#include <iostream>
using namespace std;
// Reverse a number n using Function, Constraints: -5000<=n<=5000

int reverse(int n)
{

    int rem, ans = 0, mul = 10;
    
    if(n<=5000 && n>=-5000){
        while (n)
    {

        rem = n % 10;
        n /= 10;
        ans = rem + ans * mul;
       
    }
    }
    else{
        cout<<"no. is not in range :";
    }

    return ans;
}
int main()
{
    cout << "enter the no. :";
    int n;
    cin >> n;
    int a = reverse(n);
    cout<<a;
    return 0;
}