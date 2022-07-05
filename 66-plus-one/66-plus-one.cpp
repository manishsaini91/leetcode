class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size()-1;
       int carry=1;
       // int last=digits[n-1];
       // int newlast=last+1;
        while(n>=0 and carry==1){
            int temp=digits[n]+carry;
            if(temp>=10){
                carry=1;
                 digits[n] =temp%10;              
            }
        else{
            carry=0;
            digits[n]=temp;
            }
          n--;
        }
      
        if(carry==1){
            digits.insert(digits.begin(),1);
        }
        // n--;
    
        return digits;
    }
};