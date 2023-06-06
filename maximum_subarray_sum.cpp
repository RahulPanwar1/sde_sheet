#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define in(a,n); int a[n]; for(int i=0;i<n;i++){cin>>a[i];}
#define add(a,b,c) for(int z=0;z<b;z++){c+=a[z];}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

long long maxSubarraySum(int arr[], int n)

{

    long long sum=0;

    long long maxi=arr[0];

 

    for(int i=0;i<n;i++){

        sum+=arr[i];

        maxi=max(maxi,sum);

 

        if(sum<0){

            sum=0;

        }

    }

 

    if(maxi<0 )

        return 0;

    else

        return maxi;

}

