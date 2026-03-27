class Base  {
    int x =15;
   
}
class A extends Base {
    int b = 20;
    //  A a = new A();
   
    
    void showA(){
    System.out.println("b ="+b);
    System.out.println("x ="+x);
    }
    
}
 class B extends A {
     void show(){
    int sum = x+b;
    System.out.println("sum ="+sum);
//      a.showA();

  }
}


public class Inherritance {
    public static void main (String[] args){
     B x = new B();
     x.show(); 
        A a = new A();
      a.showA();
    }
    
}
