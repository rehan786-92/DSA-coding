import java.util.Scanner;

class Solution {
    public boolean check(int[] nums) {
        int count = 0;
        int n = nums.length;
        int i = 0;
        while (i < n) {
            int next = (i + 1) % n;
            if (nums[i] > nums[next]) {
                count++;
            }
            i++;
        }
        if (count <= 1) {
            return true;
        } else {
            return false;
        }
    }
}

class Main {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        Solution s = new Solution();
        n = sc.nextInt();
        int nums[] = new int[n];
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        boolean ans = s.check(nums);
        System.out.print(ans);
    }
}