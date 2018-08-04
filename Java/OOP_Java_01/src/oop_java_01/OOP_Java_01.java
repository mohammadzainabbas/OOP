/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop_java_01;

import java.util.Scanner;
import javax.swing.SwingUtilities;

/**
 *
 * @author acer
 */
public class OOP_Java_01 {

    /**
     * @param args the command line arguments
     */
    
   
    public static void main(String[] args) {        
        System.out.println("Hello World !! ");      //cout<<"Hello World !!\n";
        
        Lab_Task a = new Lab_Task();                //Creating class Lab_task's object
        a.Print();                              //Calling member function and passing arguments
        
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        num +=10;
        System.out.println(num);
        num*=10;
        a.Display(num);
        
        //Tic Tac Toe Game
        
         SwingUtilities.invokeLater(new Runnable() {
         @Override
         public void run() {
            new TicTacToeFive(); // Let the constructor do the job
         }
      });
        
        // TODO code application logic here
    }
    
}
