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
public class MultipleChoice {
        public static void main(String args[]){

        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        String qa = "";
        int score = 0;
        for(int i = 0; i < (num * 2) + 1; i++){
            qa += in.nextLine();
        }
        
        
        String q = "";
        String a = "";
        
        for(int i = 0; i < num; i++){
            q += Character.toString(qa.charAt(i));
            a += Character.toString(qa.charAt(i + num));
        }
        
            for(int i = 0; i < num; i++){
                if(q.charAt(i) == a.charAt(i)){
                    score++;
                }
            }
        
            System.out.println(score);
             
            
    }
}
