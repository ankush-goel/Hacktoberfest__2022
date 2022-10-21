class Solution {
public:
bool isPalindrome(string s) {

   string str;
    int n = s.length();
    
    for(int i=0; i<n; i++){
        char ch = s[i];
        
        if(isalpha(ch)){
            int x = ch;
            if(isupper(x)){
                ch = tolower(ch);
            }
            str.push_back(ch);
        } else if(isdigit(ch)){
            str.push_back(ch);
        }
    }
     
    int start = 0;
    int end = str.length()-1;
    
    while(start <= end){
        
    if(str[start] != str[end])
        return false;
        
        start++;
        end--;
    }
   return true; 
}
};
