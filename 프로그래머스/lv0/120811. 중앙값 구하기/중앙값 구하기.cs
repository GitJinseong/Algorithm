using System;
using System.Linq;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int size = array.Length;
        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if (array[i] < array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }    
            }
        }
        
        return array[size / 2];
    }
}