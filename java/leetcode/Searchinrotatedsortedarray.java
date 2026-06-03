import java.util.Scanner;

class Solution {
    public int search(int[] nums, int target) {
        int left=0;
        int right=nums.length-1;
        while(left<=right){
             int mid = left + (right-left)/2;
            if(nums[mid]==target){
               return mid;
            }
            if(nums[left]<=nums[mid]){
                 if(target>=nums[left] && target<nums[mid]){
                    right = mid-1;
                 }
                 else{
                    left = mid+1;
                 }
            }
            else{
                 if(target>nums[mid] && target<=nums[right]){
                   left = mid+1;
                 }
                 else{
                    right = mid-1;
                 }
            }
            
        }
        return -1;
    }
}
class Main{
    public static void main(String[] args){
      int n; int target;
      Scanner sc = new Scanner(System.in);
      Solution s = new Solution();
      target = sc.nextInt();
      n = sc.nextInt();
      int nums[] = new int[n];  
      for(int i=0;i<nums.length;i++){
        nums[i] = sc.nextInt();
      }
      int ans = s.search(nums,target);
      System.out.print(ans);
    }
}