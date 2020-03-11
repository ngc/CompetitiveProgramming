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
public class WhosInTheMiddle {
    public static void main(String args[]){
 /////////////////////////////////////////////////////////
     
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int dif = b - a;
        String strS = "You are speeding and your fine is $";
     
        if(dif <= 0){
            System.out.println("Congratulations, you are within the speed limit!"); 
        }else if(dif >= 1 && dif <= 20){
            System.out.println(strS + 100 + ".");

        }else if(dif >= 21 && dif <= 30){
            System.out.println(strS + 270 + ".");

        }else if(dif >= 31){
            System.out.println(strS + 500 + ".");

        }
        
                
 /////////////////////////////////////////////////////////
    }
}
