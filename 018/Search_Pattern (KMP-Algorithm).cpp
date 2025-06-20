#include <vector>
#include <string> 
using namespace std;

class Solution {
public:
    
    void computeLPSArray (const string&pat, vector<int>& lps){
        int length = 0; //length of the previous longest prefix suffix
        int i = 1;
        lps[0] = 0; //lps[0] is always 0
        //the loop calculates lps[i] for i = 1 to m-1
        while (i < pat.length()){
            if (pat[i] == pat[length]){
                length++;
                lps[i] = length;
                i++;
            } else { // (pat[i] !=pat[length]) 
            
            if (length != 0) {
                length = lps[length - 1];
            } else { 
                lps[i] = 0;
                i++;
             }
        }
    }
}
    vector<int>search (const string& pat,const string& txt){
        // std::vector<int> result;
        int N = txt.length(); //length of text
        int M = pat.length(); //length of pattern
        
    vector<int> lps(M);
    computeLPSArray(pat, lps);
    
    vector<int> result;
    int i = 0; int j = 0;
    
    while (i < N) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
        }
        
        if (j == M) {
            //pattern found at index i - j
            result.push_back(i - j);
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                    i++;
                }
             }
         }
            return result;
    }
};
