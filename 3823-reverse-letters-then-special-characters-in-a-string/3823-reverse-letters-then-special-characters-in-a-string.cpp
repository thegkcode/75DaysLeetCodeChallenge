class Solution {
public:
    int is(char ch){
        return (ch>='a' && ch<='z');
    }

    string reverseByType(string s) {
        int n=s.size();
        int i=0, j=n-1;

        while(i<=j){
            if(!is(s[i])) i++;
            else if(!is(s[j])) j--;
            else swap(s[i++], s[j--]);

        }
        
        i=0, j=n-1;
        while(i<=j){
            if(is(s[i])) i++;
            else if(is(s[j])) j--;
            else swap(s[i++], s[j--]); 
        }
        return s;
        
    }
};