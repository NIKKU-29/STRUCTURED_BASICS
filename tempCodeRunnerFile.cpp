#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "ENTER THE NUMBER  ";
    cin >> num;
    
    int count = 0;
    int ans = 1;
    int sum = 0;

    // Find the number of 1s in the binary representation of num
    // and break early once all significant bits are processed
    bool found = false;
    for(int i = 31; i >= 0; i--)
    {
        if((num >> i) & 1)
        {
            found = true;
            count++;
        }
        else if(found)
        {
            break;  // Break once we've processed all significant bits
        }
    }

    // Calculate sum based on the count of 1s
    while(count)
    {
        sum += ans;
        ans *= 2;
        count--;
    }

    cout << "--->" << sum;
    return sum;
}
