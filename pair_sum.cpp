#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> v1;
   int n = arr.size();
   for(int i=0;i<n;i++)
   {
      for(int j =i+1;j<n;j++)
      {
         if(arr[i] + arr[j] ==s)
         {
            v1.push_back({arr[i], arr[j]});
         }
      }
   }
   for(int i =0;i<v1.size();i++)
   {
      if(v1[i][0] > v1[i][1])
      {
         swap(v1[i][0], v1[i][1]);
      }
   }
   sort(v1.begin(), v1.end());

   return v1;
 
}