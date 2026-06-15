
#include<bits/stdc++.h>
using namespace std;int main (){
public 
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        vector<vector<int>>result;
        map<int,int>freq ;
          for(int i=0;i < nums.size();i++)
          {
          int num=nums[i];
          freq[num]++;
          }
            for (auto it : freq) {
      cout << " [" << it.first <<","<< it.second << "]" << endl;
            }
            return 0;
    }
  }1