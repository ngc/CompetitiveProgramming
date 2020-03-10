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

/*

In a card game, each player's hand is made up of 13 cards. Each hand has a total point value determined by the number of cards that have a point value. The cards which are worth points are the Ace (4 points), King (3 points), Queen (2 points) and Jack (1 point). The other cards (2, 3, 4, 5, 6, 7, 8, 9, 10) have no point value.

There are four of each type of card, one in each of the four suits. The suits are called clubs (C), diamonds (D), hearts (H), and spades (S). As well, points are assigned for each suit which has a void (3 points), a singleton (2 points), or a doubleton (1 point). A void in a suit means that there are no cards of that suit (e.g. a hand with no spades). A singleton in a suit means that there is only one card in that suit (e.g. a hand with only one diamond). A doubleton in a suit means that there are only two cards in that suit.

Write a program to read a set of thirteen cards in the form of a string, then evaluate the number of points in the hand. The suits will appear in increasing alphabetical order. Within each suit there will be no duplicate cards.

The output is to be the hand and the point value shown in a table form as below. Your output should list the cards in the same order as the input. Note that 10 is represented by the character T in both the input and the output.

*/

public class KeepingScore {
 
    public static void main(String args[]){
        
        Scanner in = new Scanner(System.in);
        
        String input = in.next();
        String clubs = "";
        String diamonds = "";
        String hearts = "";
        String spades = "";
        String temp = "";
        
        
        int clubLoc = 0, diamondLoc = 0, heartLoc = 0, spadeLoc = 0;
        int cp = 0, dp = 0, hp = 0, sp = 0, pAdded = 0;
        //C258TJKD69QAHSTJA
        
        for(int i = 0; i < input.length(); i++){
            if(input.charAt(i) == 'C'){
                clubLoc = i;
                
            }else if(input.charAt(i) == 'D'){
                diamondLoc = i;
                
            } else if(input.charAt(i) == 'H'){
               
                heartLoc = i;
            } else if(input.charAt(i) == 'S'){
                spadeLoc = i;
                
            }
        }
        
      
                    
                for(int f = 0; f < diamondLoc - clubLoc - 1; f++){
                    temp = Character.toString(input.charAt(f + clubLoc + 1)) + " ";
                  
                    if(!temp.equals("C") && !temp.equals("D") && !temp.equals("H") && !temp.equals("S")){
                       clubs += temp; 
                       cp += pointDet(temp);
                    }
                }
            
                    
               
                    
                    for(int f = 0; f < heartLoc - diamondLoc - 1; f++){
                        
                        temp = Character.toString(input.charAt(f + diamondLoc + 1)) + " ";
                  
                        if(!temp.equals("C") && !temp.equals("D") && !temp.equals("H") && !temp.equals("S")){
                            dp += pointDet(temp);
                            diamonds += temp;
                        }
                        
                     
           
                }
                    
               
                    
                    for(int f = 0; f < spadeLoc - heartLoc - 1; f++){
                        
                     
                        temp = Character.toString(input.charAt(f + heartLoc + 1)) + " ";
                        if(!temp.equals("C") && !temp.equals("D") && !temp.equals("H") && !temp.equals("S")){
                            hp += pointDet(temp);
                     hearts += temp;
                        }
                }
                    
                
                    
                    for(int f = 0; f < input.length() - spadeLoc - 1; f++){
                        
                       
                        
                        temp = Character.toString(input.charAt(f + spadeLoc + 1)) + " ";
                        if(!temp.equals("C") && !temp.equals("D") && !temp.equals("H") && !temp.equals("S")){
                            spades += temp;
                            sp += pointDet(temp);
                            
                        }
           
                }
                    
                    
       cp += VSD(clubs);
       dp += VSD(diamonds);
       hp += VSD(hearts);
       sp += VSD(spades);
                    
        System.out.println("Cards Dealt\t\tPoints");
        System.out.println("Clubs " + clubs + "\t\t" + cp);
        System.out.println("Diamonds " + diamonds + "\t\t" + dp);
        System.out.println("Hearts " + hearts + "\t\t" + hp);
        System.out.println("Spades " + spades + "\t\t" + sp);
        System.out.println("\tTotal " + String.valueOf(cp + dp + hp + sp));
    
        }
       
        
        public static int pointDet(String input){
            char val = input.charAt(0);
            
            switch(val){
                
                case 'A':
                    return 4;
                case 'K':
                    return 3;
                case 'Q':
                    return 2;
                case 'J':
                    return 1;
            }
         return 0;
        }
        
        public static int VSD(String input){
            
            input = input.replaceAll("\\s", "");
            
            switch(input.length()){
                case 0:
                    return 3;
                case 1:
                    return 2;
                case 2:
                    return 1;
            }
            return 0;
        }
        
        
    }
    

