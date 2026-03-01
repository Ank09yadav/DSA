// Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class arrayPartition
{
public:
    vector<int> nums;
    
    int arrayPairSum()
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
            sum += nums[i];
        return sum;
    }
    void takeInput()
    {
        int sizeofArray;
        cout << "Enter the size of array :";
        cin >> sizeofArray;
        nums.resize(sizeofArray);
        for (int i = 0; i < sizeofArray; i++){
            cout<<"Enter the element :";cin>>nums[i];
        }
        
    }
};

int main()
{
    arrayPartition arp ;
    arp.takeInput();
    int output = arp.arrayPairSum();
    cout<<"the min sum is = "<<output;
    return 0;
}