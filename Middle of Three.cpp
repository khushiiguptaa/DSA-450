/*You don't need to read input or print anything.Your task is to complete the function middle() which takes three integers A,B and C as input parameters and returns the number which has middle value.*/

#include <bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
  public:
    int middle(int A, int B, int C)
    {
        if(A>B && A<C)
        {
            return A;
        }
        else if(B>C && B<A || B>A && B<C)
        {
            return B;
        }
        else if(C>A && C<B || C>B && C<A)
        {
            return C;           
        } 
    }
};  

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 
