import java.util.Scanner;
class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
       int n= A.length;  
        int ren[] = new int[n];
        int count = 0;
        int freq1[] = new int[n+1];
        int freq2[] = new int[n+1];
        for(int i=0;i<n;i++){
            freq1[A[i]]++;
             if(freq1[A[i]]==freq2[A[i]]){
                count++;
             }
              freq2[B[i]]++;
             if(freq2[B[i]]==freq1[B[i]]){
                count++;
             }
              ren[i]=count;
          
                }
             return ren;
            }

        }

        
    



class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int A[] = new int[n];
        for(int i=0;i<n;i++){
            A[i]= sc.nextInt();
        }
        int B[] = new int[n];
        for(int i=0;i<n;i++){
            B[i]= sc.nextInt();
        }
        Solution s = new Solution();
        int ren[] = s.findThePrefixCommonArray(A, B);
        for(int i=0;i<ren.length;i++){
              System.out.print(ren[i] + " ");
        }
     
    }
}