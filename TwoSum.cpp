/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/


#include <stdio.h>
using namespace std;

int main()
{
    int i,j,n,target;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==target)
                cout<<"["<<i<<","<<j<<"]";
        }
    }
    return 0;
}
