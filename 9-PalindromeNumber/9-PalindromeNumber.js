// Last updated: 4/16/2026, 8:25:41 PM
var isPalindrome = function(x) {
     let last_digit;
let sum=0;
let temp=x;
while(temp>0){
    last_digit=temp%10;
    temp=Math.floor(temp/10);
sum=sum*10+last_digit;

}   
if(sum===x){
   return true
} else return false
};


