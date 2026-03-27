class Animal {
    void eat () {
        System.out.println("The animal eats food:");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("The dogs barks:");
    }
}
 class Puppy extends Dog {
     void play() {
       System.out.println("The Puppy play:");
     }
    
 }


 public class Multilevelinheritance {
   public static void main(String[] args) {
    Puppy puppy = new Puppy();
    puppy.eat();;
    puppy.bark();
    puppy.play();
   } 
}

