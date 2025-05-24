#include <vector>
#include <algorithm> //for std::reverse or std::rotate (optional,but good to know0

class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size(); // declare n as the size of the array
        d = d % n; // handel d >= n 
        if (d == 0) return;
        //using a temporary array 
        std::vector<int> temp(arr.begin(),arr.begin() + d);
        //copy first 'd' elements
        for (int i = d; i< n; ++i) { //shift remaining elements left 
            arr [i - d] = arr[i];
        }
        for (int i = 0; i < d; ++i) { //copy temp elements to end 
            arr[n - d + i] = temp[i];
        }
    }
};

/*
//more concise and efficient in place using std::rotate:
class soluation {
    public:
    void rotateArr(std::vector<int>& arr , int d , int n) {
        d = d % n;
        if (d==o) return ;
        std::rotate(arr.begin(),arr.begin() + d, arr.end());
    }
};
*/
