/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aplusb;

import java.util.Scanner;

/**
 *
 * @author Nathan
 */
public class SoundsFishy {
        public static void main(String args[]){
 /////////////////////////////////////////////////////////
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        //String[] array = input.split(" ");
        int count = 0;
        boolean has = false;
        
        for(int i = 0; i < input.length(); i++){
            if(input.charAt(i) == ':' && input.charAt(i + 1) == '-' ){
                if(input.charAt(i + 2) == ')'){
                  count++;  
                  has = true;
                }else if(input.charAt(i + 2) == '('){
                count--;
                has = true;
                }
        }
        
        }
        
        if(count > 0){
            System.out.println("happy");
        }else if(count < 0){
            System.out.println("sad");
        }else if(count == 0 && has){
            System.out.println("unsure");   
        }else{
            System.out.println("none");
        }
            
        
        
        
 /////////////////////////////////////////////////////////
    
}
}
