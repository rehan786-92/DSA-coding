import java.util.Scanner;

public class primechek { 
    public static void main(String[] args){
        int Isprime=1;
        Scanner var1=new Scanner(System.in);
        System.out.println("Enter ant enteger :");
        int n = var1.nextInt();
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
             Isprime=0;
             break;
            }
           
        }
        if(Isprime==1){
            System.out.println("The number is prime");
        }
        else{
            System.out.println("The number is not prime");
        }
    }
    
}
