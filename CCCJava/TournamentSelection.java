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
public class TournamentSelection {
        public static void main(String args[]){
 /////////////////////////////////////////////////////////
        Scanner in = new Scanner(System.in);
        int counter = 0;
        
        for(int i = 0; i < 6; i++){
          if(in.next().equals("W")){
                counter++;
            }  
        }

        if(counter == 0){
            System.out.println("-1");
        } else if(counter == 5 || counter == 6){
            System.out.println("1");
        }else if(counter == 3 || counter == 4){
            System.out.println("2");
        }else if(counter == 1 || counter == 2){
            System.out.println("3");
        }
        
 /////////////////////////////////////////////////////////
    }
}
