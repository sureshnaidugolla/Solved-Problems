import java.util.*;
import java.lang.Math;

class Main{
    public static void main(String args[]){
        int a,b,c,d,e,f,max=9,min=0,k=0;
        Scanner s=new Scanner(System.in);
        System.out.println("Welcome to Texas Pick 3!\nLet's do a quick pick and check to see if you win!");
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
        d=(int)((Math.random())*(max-min)+min);
        e=(int)((Math.random())*(max-min)+min);
        f=(int)((Math.random())*(max-min)+min);
        System.out.println("Your quick pick numbers are "+a+","+b+","+c+"\nThe Draw Number are "+d+","+e+","+f+"\nDid you win?");
        if(a==d){
            if(b==e && c==f){
                k=0;
            }
            else if(b==f && c==e){
                k=1;
            }
            else{
                k=2;
            }
        }
        else if(a==e){
            if(b==f && c==d){
                k=1;
            }
            else if(b==d && c==f){
                k=1;
            }
            else{
                k=2;
            }
        }
        else if(a==f){
            if(b==d && c==e){
                k=1;
            }
            else if(b==e && c==d){
                k=1;
            }
            else{
                k=2;
            }
        }
        else{
            k=2;
        }
        if(k==0){
            System.out.println("yah!,you won $250.00");
        }
        else if(k==1){
            System.out.println("yah!,you won $40.00");
        }
        else{
            System.out.println("Sorry - not a winner this time, better luck next Draw!");
        }
        System.out.println("Thanks for playing Texas Pick 3!");
    }
}