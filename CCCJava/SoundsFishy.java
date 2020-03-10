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
        
        Scanner in = new Scanner(System.in);
        int a  = in.nextInt();
        int b  = in.nextInt();
        int c  = in.nextInt();
        int d  = in.nextInt();
        
        if(a < b && b < c && c < d){
            System.out.println("Fish Rising");
        }else if(a > b && b > c && c > d){
            System.out.println("Fish Diving");
        }else if(a == b && b == c && c == d){
            System.out.println("Fish At Constant Depth");
        }else{
            System.out.println("No Fish");
        }

        }
}
