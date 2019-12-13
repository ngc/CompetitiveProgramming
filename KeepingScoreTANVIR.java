//Made by Tanvir, not me
//Hosted here for the sake of MSS Computer Club

import java.util.*;

public class Solution {
	public static String clubs,diamonds,hearts,spades;
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	StringTokenizer st = new StringTokenizer(br.readLine());
    	String s = st.nextToken();
    	br.close();
    	
    	 clubs = s.substring(s.indexOf("C"), s.indexOf("D"));
    	 diamonds = s.substring(s.indexOf("D"), s.indexOf("H"));
    	 hearts = s.substring(s.indexOf("H"), s.indexOf("S"));
    	 spades = s.substring(s.indexOf("S"), s.length());
    	
    	 System.out.printf( "%-20s %5s %n","Cards Dealt", "Points");
    	 
    	int total = pointCounter(clubs)+pointCounter(diamonds)+pointCounter(hearts)+pointCounter(spades);
    	System.out.printf("%-20s %5s %n","Clubs "+ clubs.substring(1).replaceAll("(.{"+1+"})", "$1 "), pointCounter(clubs));
    	System.out.printf("%-20s %5s %n","Diamonds "+ diamonds.substring(1).replaceAll("(.{"+1+"})", "$1 "), pointCounter(diamonds));
    	System.out.printf("%-20s %5s %n","Hearts "+ hearts.substring(1).replaceAll("(.{"+1+"})", "$1 "), pointCounter(hearts));
    	System.out.printf("%-20s %5s %n","Spades "+ spades.substring(1).replaceAll("(.{"+1+"})", "$1 "), pointCounter(spades));
    	System.out.printf("%26s","Total "+ total );
}
    	public static int pointCounter(String sample) {
    		int n = 0;
    		int len = sample.length();
    		
    		switch (len) {
    		case 1: 
    			n+=3;
    			break;
    		case 2:
    			n+=2;
    			break;
    		case 3:
    			n+=1;
    			break;
    		default:
    			n+= 0;
    			break;
    		}
    		
    		for (int i=0; i<sample.length();i++) {
    			char c = sample.charAt(i);
    				switch (c) {
    				case 'A':
    					n += 4;

    					break;
    				case 'K':
    					n += 3;

    					break;
    				case 'Q':
    					n+= 2;

    					break;
    				case 'J':
    					n+= 1;

    					break;
    				default:
    					n = n+0;
    					break;
    				}
    			}
    		return n;
    	}
}
