// C++ program for the above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function for swapping two numbers 
void swap(int& x, int& y) 
{ 
	int temp = x; 
	x = y; 
	y = temp; 
} 

// Function to find the possible 
// permutations 
void permutations(vector<vector<int> >& res, 
				vector<int> nums, int l, int h) 
{ 
	// Base case 
	// Add the vector to result and return 
	if (l == h) { 
		res.push_back(nums); 
		return; 
	} 

	// Permutations made 
	for (int i = l; i <= h; i++) { 

		// Swapping 
		swap(nums[l], nums[i]); 

		// Calling permutations for 
		// next greater value of l 
		permutations(res, nums, l + 1, h); 

		// Backtracking 
		swap(nums[l], nums[i]); 
	} 
} 

// Function to get the permutations 
vector<vector<int> > permute(vector<int>& nums) 
{ 
	// Declaring result variable 
	vector<vector<int> > res; 
	int x = nums.size() - 1; 

	// Calling permutations for the first 
	// time by passing l 
	// as 0 and h = nums.size()-1 
	permutations(res, nums, 0, x); 
	return res; 
} 

// Driver Code 
int main() 
{ 
	vector<int> nums = { 1, 2, 3 }; 
	vector<vector<int> > res = permute(nums); 

	// printing result 
	for (auto x : res) { 
		for (auto y : x) { 
			cout << y << " "; 
		} 
		cout << endl; 
	} 

	return 0; 
}
