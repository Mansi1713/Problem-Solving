  import java.io.*;
 
public class DeleteFile {

      public static void main(String[] args) {
        
      try
       {
           File fobj=new File("PPA.txt");
           fobj.delete();

        }
        catch(Exception objException)
        {

        }   
}
}