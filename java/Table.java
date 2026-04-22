import java.util.Scanner;

public class Table {
    public static void main(String[] args){
        Scanner x = new Scanner(System.in);
        System.out.print("Enter the any integer:");
        int a = x.nextInt();
        int sum=1;
        for(int i=1;i<=10;i++){
         sum=a*i;
          System.out.println(sum);
        }
    }
}
