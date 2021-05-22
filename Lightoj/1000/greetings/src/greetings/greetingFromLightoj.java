package greetings;

import java.util.Scanner;
public class greetingFromLightoj{
    
    public static void main (String[] args){
        System.out.println("Hello");
        Scanner input=new Scanner(System.in);
        
        int t=input.nextInt();
        for(int i=1;i<=t;i++){
            int a=input.nextInt();
            int b=input.nextInt();
            int sum=a+b;
            System.out.println("Case "+i+": "+sum);
        }
    }
}