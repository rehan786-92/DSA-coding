import java.util.Scanner;
public class MinimumElement {
    public int MinimumElement(int[] nums){
        int[] minSum = new int[nums.length];
        int minnum = Integer.MAX_VALUE;
        for(int i=0;i<nums.length; i++){
            int num = nums[i];
            int sum = 0;
            while(num>0){
                int digit = num%10;
                 sum+=digit;
                 num/=10;
            }
            if(sum<minnum){
             minnum = sum;
            }
        }
        return minnum;
    }
}







class Main{
    public static void main(String[] args){
     int n;
     Scanner sc = new Scanner(System.in);
     n= sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int p = MinimumElement(int[] arr);
        System.out.println(p);
    }
}