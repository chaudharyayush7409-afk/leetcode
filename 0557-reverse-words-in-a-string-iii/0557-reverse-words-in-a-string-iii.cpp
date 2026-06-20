class Solution {
public:
    string reverseWords(string s) {
        
        // string result = "";
        // string words = "";
        // for(int i=0; i<s.length(); i++){
            
        //     if(s[i]==' '){
        //         string rev = "";
        //         for(int i=words.length()-1; i>=0; i--){
        //             rev+=words[i];
        //         }

        //         result+=rev+" ";
        //         words = "";

        //     }
        //     else{
        //         words+=s[i];
        //     }
        // }
        
        // string rev = "";
        // for(int j=words.length()-1; j>=0; j--){
        //     rev+=words[j];
        // }
        // result+=rev;
        // return result;


        int n = s.length();

        int start = 0;

        for(int i=0; i<=n; i++){
            if(i==n || s[i]==' '){
                reverse(s.begin()+start, s.begin()+i);
                start = i+1;
            }
        }
        return s;





    }
   
};