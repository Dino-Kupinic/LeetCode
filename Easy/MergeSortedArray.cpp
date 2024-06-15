//
// Created by Dino Kupinic on 15.06.24.
// https://leetcode.com/problems/merge-sorted-array/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> result{};
    nums1.erase(nums1.begin() + m, nums1.end());
    result.resize(nums1.size() + nums2.size());
    ranges::merge(nums1,nums2, result.begin());
    nums1 = result;
  }
};
