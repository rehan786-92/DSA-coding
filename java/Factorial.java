import java.util.Scanner;

public class Factorial {
    public static void main(String[] args){
    Scanner x;
    x = new Scanner(System.in);
     int n = x.nextInt();
     int sum=1;
     for(int i=1;i<=n;i++){
        sum*=i;
     }
     System.out.println("factorial is :"+sum);
    }
}
