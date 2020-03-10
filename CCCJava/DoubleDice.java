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
public class DoubleDice {
        public static void main(String args[]){
            Scanner in = new Scanner(System.in);
        
        int a = in.nextInt();
        int[] Ant = new int[a];
        int[] David = new int[a];
        int ton;
        int dav;
        int TonP = 100;
        int davP = 100;
        
        for(int i = 0; i < a; i++){
            ton = in.nextInt();
            dav = in.nextInt();
            
            if(ton > dav){
                davP -= ton;
            }
            
          //  Ant[i] = in.nextInt();
          //  David[i] = in.nextInt();
        }
            //System.out.println(Arrays.toString(Ant));
           // System.out.println(Arrays.toString(David));
            
       
       


    }
}
