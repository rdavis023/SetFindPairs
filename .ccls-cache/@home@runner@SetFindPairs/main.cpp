#include "FindPairs.h"
#include <vector>
#include <unordered_set>

using namespace std;


vector<vector<int>> findPairs(const vector<int>& arr1, const vector<int>& arr2, int target) {
    //   +=========================================================+
    //   |                 WRITE YOUR CODE HERE                    |
    //   | Description:                                            |
    //   | - This function finds all pairs of integers from        |
    //   |   'arr1' and 'arr2' that sum up to 'target'.            |
    //   | - It uses an unordered_set for quick look-up.           |
    //   | - It returns a 2D vector containing the pairs.          |
    //   |                                                         |
    //   | Return type: vector<vector<int>>                        |
    //   |                                                         |
    //   | Tips:                                                   |
    //   | - 'mySet' stores numbers from 'arr1'.                   |
    //   | - 'pairs' will store the pairs that meet the target.    |
    //   | - Loop through 'arr1' to populate 'mySet'.              |
    //   | - Loop through 'arr2' to find pairs.                    |
    //   | - Use 'find' method for quick look-up in set.           |
    //   | - Check output from Test.cpp in "User logs".            |
    //   +=========================================================+
     unordered_set<int> mySet; // To store elements from arr1
    vector<vector<int>> pairs; // To store the resulting pairs

    // Populate mySet with elements from arr1
    for (int num : arr1) {
        mySet.insert(num);
    }

    // Loop through arr2 to find valid pairs
    for (int num : arr2) {
        int complement = target - num; // Calculate complement

        // If complement is found in mySet, a valid pair is found
        if (mySet.find(complement) != mySet.end()) {
            pairs.push_back({complement, num}); // Add pair to result
        }
    }

    return pairs; // Return the list of pairs
}