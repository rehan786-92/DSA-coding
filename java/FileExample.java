import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class FileExample {

    public static void main(String[] args){
     try {
        File file = new File("example.txt");
        if(file.createNewFile()){
            System.out.println("file created :" + file.getName());
        }
        else{
         System.out.println("file already exist:");
        }
        FileWriter writer = new FileWriter(file);
        writer.write("Hello bhai, ye data file ke andar likha gaya hai!");
        writer.close();

        System.out.println("Data successfully written in file.");
     } catch(Exception e){
        System.out.println("an error ocurred");
        e.printStackTrace();
     }
    }
}
