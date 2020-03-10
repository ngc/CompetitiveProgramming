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
public class ShiftySum {
        public static void main(String args[]){
            
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
            int k = in.nextInt();
            int culm = 0;
            
            for(int i = 0; i < k + 1; i++){
                culm += n * Math.pow(10, i);
            }
            
            System.out.println(culm);
            
            
    }
}
