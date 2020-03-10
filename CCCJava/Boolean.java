/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aplusb;
import java.util.*;
/**
 *
 * @author Nathan
 */
public class Boolean {
        public static void main(String args[]){

            Scanner in = new Scanner(System.in);
            boolean notflag = false;
            String input = in.nextLine();
            
            String[] inList = input.split(" ");
            
            for(int i = 0; i < inList.length; i++){
                if(inList[i].equals("not")){
                    
                    notflag = !notflag;
                } else if(inList[i].equals("False")){
                    if(notflag){
                        System.out.println("True");
                    }else{
                        System.out.println("False");
                    }
                }else if(inList[i].equals("True")){
                    if(notflag){
                        System.out.println("False");
                    }else{
                        System.out.println("True");
                    } 
                
                
            }
               
            
    }
            
        }
}
