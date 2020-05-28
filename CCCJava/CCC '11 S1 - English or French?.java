import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws java.io.IOException{
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        char letter;
        int tCount = 0;
        boolean s = false;
        int numOfLines = Integer.parseInt(br.readLine());
        String main = "";
        
        for(int i = 0; i < numOfLines; i++){
            main += br.readLine();
        } 
        
        for(int i = 0; i < main.length(); i++){
            letter = main.charAt(i);
            if(letter == 't' || letter == 'T'){
                tCount++;
            }else if(letter == 's' || letter == 'S'){
                tCount--;
                s = true;
            }
        
        }
        if(tCount > 0){
            System.out.println("English");
        }else if(tCount == 0 && s==false){
            System.out.println("English");
        }
        else{
        System.out.println("French");
        }
 
    }
  
    
}
