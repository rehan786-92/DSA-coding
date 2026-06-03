import java.util.Scanner;
class Solution{
   public int findLenghOfLastWord(String num) {
   int len=0;
     for(int i=num.length()-1;num.charAt(i)!=' ';i--){
        len++;
     }
      return len;
   }
}




class Main{
    public static void main(String[] args){
     Scanner  sc = new Scanner(System.in);
     String num = sc.nextLine();
     Solution s = new Solution();
     int ans = s.findLenghOfLastWord(num);
     System.out.print(ans);
     
     
    }
}