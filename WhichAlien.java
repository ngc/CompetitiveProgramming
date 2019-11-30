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
public class WhichAlien {
        public static void main(String args[]){
 /////////////////////////////////////////////////////////
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        
        if(a <= 2 && b <= 3){
            System.out.println("GraemeMercurian");
        }
        
        if(a <= 6 && b >= 2){
            System.out.println("VladSaturnian"); 
        }
        
        if(a >= 3 && b <= 4){
            System.out.println("TroyMartian");
        }
        
        
 /////////////////////////////////////////////////////////
    }
}
