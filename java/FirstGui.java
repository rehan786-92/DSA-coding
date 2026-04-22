import java.awt.*;


public class FirstGui {
    FirstGui(){
        Frame fm=new Frame();
        // Label l1 = new Label("Enter you name:");
        // l1.setBounds(30,50,120,30);
        // fm.add(l1);
        // TextField t1=new TextField();
        // t1.setBounds(90,50,200,30);
        // fm.add(t1);
        Label l2 = new Label2("Enter password:");
        l2.setBounds(30,100,120,30);
        fm.add(l2);
        TextField t2=new TextField();
        t2.setBounds(90,100,200,30);
        fm.add(t2);
        Button btn1=new Button("Login");
        btn1.setBounds(140,150,60,30);
        fm.add(btn1);
        fm.setSize(300,300);
        fm.setLayout(null);
        fm.setVisible(true);
    }
    public static void main(String[] args){
        FirstGui ta=new FirstGui();
    }
    
}
