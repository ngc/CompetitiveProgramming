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
public class CanadianCalorieCounting {
        public static void main(String args[]){
 /////////////////////////////////////////////////////////
        Scanner in = new Scanner(System.in);
        int[] list = new int[4];
        
        for(int i = 0; i < list.length; i++){
            list[i] = in.nextInt();
        }
            System.out.println("Your total Calorie count is " + find(list) + ".");
        
        
        
 
    }
        
    public static int find(int[] l){
        
        int cc = 0;
        
        //System.out.println(l[0] + "|" + l[1] + "|" + l[2] + "|" + l[3]);
        
        if(l[0] == 1){
            cc += 461;
        }else if(l[0] == 2){
            cc += 431;
        }else if(l[0] == 3){
            cc += 420;
        }else if(l[0] == 4){
            cc += 0;
        }
        
        if(l[1] == 1){
            cc += 100;
        }else if(l[1] == 2){
            cc += 57;
        }else if(l[1] == 3){
            cc += 70;
        }else if(l[1] == 4){
            cc += 0;
        }
        
        if(l[2] == 1){
            cc += 130;
        }else if(l[2] == 2){
            cc += 160;
        }else if(l[2] == 3){
            cc += 118;
        }else if(l[2] == 4){
            cc += 0;
        }
        
        if(l[3] == 1){
            cc += 167;
        }else if(l[3] == 2){
            cc += 266;
        }else if(l[3] == 3){
            cc += 75;
        }else if(l[3] == 4){
            cc += 0;
        }
        
        return cc;
    }
        
}
