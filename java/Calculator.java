import java.awt.*;

public class Calculator {
    Calculator(){
      Frame fm = new Frame();
      TextField tx = new TextField();
      tx.setBounds(20, 30, 160, 30);
      fm.add(tx);
      Button btn1,btn2,btn3,btn4,btn5,btn6,btn7,btn8,btn9,btn0,btnplus,btnminus,btnmult,btndevide,btnclr,btnleseql;
              
        btn1 = new Button("1"); 
        btn1.setBounds(20, 70, 20, 25);
        fm.add(btn1); 
        btn2 = new Button("2"); 
        btn2.setBounds(60, 70, 20, 25);
        fm.add(btn2); 
        btn3 = new Button("3"); 
        btn3.setBounds(100, 70, 20, 25);
        fm.add(btn3); 
        btnplus = new Button("+"); 
        btnplus.setBounds(155, 70, 20, 25);
        fm.add(btnplus); 
        fm.setSize(400,400);  
        fm.setLayout(null);
        fm.setVisible(true);
    }
    public static void main(String[] args) {
        Calculator clt = new Calculator();

    }
    
}
