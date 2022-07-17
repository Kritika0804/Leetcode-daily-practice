class Solution {
public:
    bool isPalindrome(int x) {
        
        string str=to_string(x);
        /*int i=0,j=str.strlen();
        while(i<j){
            if(str[i]==str[j]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
        else{
            return false;
        }*/
        string str1=str;
        reverse(str1.begin(), str1.end());
        if(str==str1){
            return true;
        }
        else{
            return false;
        }
        
    }
};