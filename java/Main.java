 interface Animal {
    void eat();
}
 interface Bird extends Animal {
    void fly();
 }

 class Sparrow implements Bird {
    public void eat() {
      System.out.println("sparrow is eating");
    }
    public void fly() {
      System.out.println("sparrow is flying");
    }
    
 }
 public class Main {
    public static void main(String[] args){
      Sparrow mySparrow = new Sparrow();
      mySparrow.eat();
      mySparrow.fly();
    }
    
 }