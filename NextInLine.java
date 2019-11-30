/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aplusb;
import java.io.*;
import java.util.*;
/**
 *
 * @author Nathan
 */
public class NextInLine {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int d = b - a;
        System.out.println(d + b);
    }
}
