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
public class BMI {
        public static void main(String args[]){
 /////////////////////////////////////////////////////////
   Scanner in = new Scanner(System.in);
        int[] intList = new int[in.nextInt()];
        for(int i = 0; i < intList.length; i++){
            intList[i] = in.nextInt();
        }
        Arrays.sort(intList);
        for(int i = 0; i < intList.length; i++){
            System.out.println(intList[i]);
        }
       
        
 /////////////////////////////////////////////////////////
    }
}
