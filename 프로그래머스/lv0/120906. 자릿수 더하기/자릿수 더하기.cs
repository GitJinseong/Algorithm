using System;

public class Solution {
    public int solution(int n) {
        string numbers = n.ToString();
        char[] numbersArray = numbers.ToCharArray(); 
        int answer = 0;
        for (int i = 0; i < numbersArray.Length; i++)    
        {
            // int.Parse을 쓰려면 char을 string으로 형변환 해야함.
            int number = int.Parse(numbersArray[i].ToString());
            answer = answer + number;
        }
    
        return answer;
    }
}