import java.util.Scanner;

public class Leapyear {
    public static void main(String[] args){
        Scanner var1=new Scanner(System.in);
        System.out.println("Enter thr any years:");
        int n=var1.nextInt();
        if(n%4==0 || n%400==0){
            System.out.println("The given year is Leap year ");
        }
        else{
            System.out.println("The given year is not Leap year ");
        }
    }
}
