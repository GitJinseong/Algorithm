using System;

public class Solution {
    public int solution(int n) {
        
        int answer = n / 7;
        int answer2 = (n % 7) > 0 ? 1 : 0;
        return answer + answer2; 
    }
}