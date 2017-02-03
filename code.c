public class Solution {  
    public int[] twoSum(int[] numbers, int target) {  
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();  
        int[] result = new int[2];  
        for (int i = 0; i < numbers.length; i++) {  
            if (map.get(target - numbers[i]) != null) {  
                result[0] = map.get(target - numbers[i]) + 1;  
                result[1] = i + 1;  
                break;  
            } else {  
                map.put(numbers[i], i);  
            }  
        }  
        return result;  
    }  
  
    public static void main(String[] args) {  
        int[] numbers = { 2, 7, 11, 15 };  
        int target = 17;  
        int[] result = new Solution().twoSum(numbers, target);  
        for (int i = 0; i < result.length; i++) {  
            System.out.println(result[i]);  
        }  
    }  
}  