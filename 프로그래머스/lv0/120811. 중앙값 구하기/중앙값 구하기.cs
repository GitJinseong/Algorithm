using System;
using System.Linq;

// 셔플로 정렬한 후 인덱스에 중앙 값넣기
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