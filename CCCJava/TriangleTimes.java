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
public class TriangleTimes {

    /**
     * @param args the command line arguments
     */
    
    
    public static void main(String[] args) {
/////////////////////////////////////////////////////
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        if(a + b + c != 180){
            System.out.println("Error");
        }else if(a == b && c == b){
            System.out.println("Equilateral");
        }
        else if(a == b || a == c || c == b){
            System.out.println("Isosceles");
        }else if(a != b && c != b){
            System.out.println("Scalene");
        }
        
 /////////////////////////////////////////////////////////
    }
    
    
}
