class Solution {
public:
    int compress(vector<char>& s) {
        // int index=0;
        // int count=1;
        // int prev=s[0];
        // for(int i=1; i<s.size(); i++){
        //     if(s[i]==prev){
        //         count++;
        //     }
        //     else{
        //         s[index++]=prev;
        //         if(count>1){
        //             int start=index;
        //             while(count){
        //                 s[index++]=(count%10)+'0';
        //                 count/=10;
        //             }
        //             reverse(s.begin()+start,s.begin()+index);
        //         }
        //         prev = s[i];
        //         count=1;
        //     }
        // }
        // s[index++]=prev;
        // if(count>1){
        //     int start=index;
        //     while(count){
        //         s[index++]=(count%10)+'0';
        //         count/=10;
        //     }
        //     reverse(s.begin()+start,s.begin()+index);
        // }
        // return index;


        //+++++++++++++++++++ ---- +++++++++++

        int write = 0;
        int read = 0;

        while (read < s.size()) {

            char current = s[read];
            int count = 0;

            while (read < s.size() && s[read] == current) {
                read++;
                count++;
            }

            s[write++] = current;

            if (count > 1) {

                string cnt = to_string(count);

                for (char ch : cnt)
                    s[write++] = ch;
            }
        }

        return write;
    
    }
};