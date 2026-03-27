 public class Student {
    int rollno;
    String name;
    String univer_name;
    String cource_name;
    int c_code;
    int marks;
    static Student s1 = new Student();
   //  static Student s2 = new Student(s1);
 Student (){
    univer_name = "AKTU";
    cource_name = "MCA";
    c_code = 428;
   //   Student s2 = new Student(s1);
   //   s2.showdata();
 }
 void showdata(){
     System.out.println("Roll no. = " +rollno);
     System.out.println("Nmae = " +name);
     System.out.println("Univercity-code = " +univer_name);
     System.out.println("Cource-name = " +cource_name);
     System.out.println("C-code = " +c_code);
     System.out.println("Total marks = " +marks);
      // Student s2 = new Student(s1);
      // s2.showdata();
   //    s1.getdata(121,"khan",572);
   //  s1.showdata(); 
 }
  void getdata(int roll,String n,int m){
    rollno = roll;
    name = n;
    marks = m;
   //  Student s2 = new Student(s1);
   //     s2.showdata();
   //  s1.getdata(121,"khan",572);
   //  s1.showdata(); 
  }
  Student(Student s){
  rollno = s.rollno;
  name = s.name;
  univer_name = s.univer_name;
  cource_name = s.cource_name;
  c_code = s.c_code;
  marks = s.marks;
//   Student s2 = new Student(s1);
//        s2.showdata();
// s1.getdata(121,"khan",572);
//     s1.showdata(); 
  } 
   public static void main(String[] args){
   //  Student s1 = new Student();
   //  s1.getdata(121,"khan",572);
   //  s1.showdata(); 
     s1.getdata(121,"khan",572);
    s1.showdata(); 
     Student s2 = new Student(s1);
    s2.showdata();
 
   }
}
 