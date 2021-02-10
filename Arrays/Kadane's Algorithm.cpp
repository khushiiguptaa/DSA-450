//You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes arr and N as input parameters and returns the sum of subarray with maximum sum.
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n)
{
    int meh = 0,msf = INT_MIN;
    for(int i=0;i<n;i++)
    {
        meh = meh + arr[i];
        if(meh<arr[i])
        {
            meh = arr[i];
        }
        if(msf<meh)
        {
            msf = meh;
        }
    }
    return msf;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
