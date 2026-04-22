class Animal {
    String str;
    int y;
    void eat(){
        System.out.println("Animal eats the food:");
    }
}
 class Bird extends Animal {
    void fly(){
        System.out.println("Bird sky in fly");
  }
    
 }
  class Dog extends Bird {
    void bark(){
        System.out.println("dog bark");
    }
  }
   public class InheritClass{
    public static void main(String[] args){
        Dog x = new Dog();
        x.eat();
        x.fly();
        x.bark();
     }
   }
   
