import java.util.Scanner;

public class SimpleI {
    public static void main (String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Principle:");
        float p=sc.nextFloat();
         System.out.println("Enter a Rate:");
        float r=sc.nextFloat();
         System.out.println("Enter a Time:");
        float t=sc.nextFloat();
        float SI;
        SI = (p*r*t)/100;
        System.out.println("Simple Interest"+SI);
    }
}
