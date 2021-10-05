#include<bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) 
    {
        if(nums.size()==1)
            return 0;
        int cf=0, ce=0, jumps=0;
        for(int i=0;i<nums.size();i++)
        {
            cf=max(cf,i+nums[i]);
            if(i==ce)
            {
                jumps++;
                ce=cf;
            }
            if(ce>=nums.size()-1)
                break;
        }
        return jumps;
    }

int main(){
  int size;
  cin >> size;
  vector<int> v1(size);
  for(int &i:v1) cin >> i;
  cout << jump(v1) << endl;
  return 0;
}
