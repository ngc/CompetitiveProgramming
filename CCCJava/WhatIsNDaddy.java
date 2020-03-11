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
public class WhatIsNDaddy {
        public static void main(String args[]){
 
            Scanner in = new Scanner(System.in);
            int a = in.nextInt();
            int b;
            int c;
            int counter = 0;
            
            c = a;
            b = 0;
            
            
            for(int i = 0; i < (a / 2) + 1; i++){
                
                if(c <= 5 && b <= 5){
                  //  System.out.println(a + " is " + b + " + " + c);
                    counter++;
                }
                
                b++;
                c--;
            }
            System.out.println(counter);
    }
}
