import java.util.Scanner;
import java.util.Arrays;
class Solution {
    public int minimumCost(int[] cost) {
        Arrays.sort(cost);
        int sum =0;
        int count = 0;
        for(int i = cost.length-1;i>=0;i--){
            count++;
            if(count%3!=2){
                sum+=cost[i];
            }
        }
       return sum;

    }
}
class Main{
    public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int cost[] = new int[n];
     for(int i=0;i<n;i++){
       cost[i] = sc.nextInt();
     }
     Solution s = new Solution();
     int mincost = s.minimumCost(cost);
     System.out.println(mincost);
    }
}