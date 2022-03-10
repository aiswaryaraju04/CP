Given an integer number n, return the difference between the product of its digits and the sum of its digits. 

Example 1

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

Example 2

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21

Program

class Solution {
public:
    int subtractProductAndSum(int n) {
          int pr=1,sum=0;
  while(n)
    {
      pr=pr*(n%10);
      sum=sum+(n%10);
      n=n/10;
    }
  return pr-sum;
        
        
    }
};
