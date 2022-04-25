#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int number;
    cout << "Enter a number : " << endl;
    cin >> number;



    while(number >= 10){
        number = number/10;
    }

    if(number % 2 == 0)
        cout<<"EVEN";
    else
        cout<<"ODD";
    return 0;
}
