/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop_java_02;

/**
 *
 * @author acer
 */
public class OOP_Java_02 {

    /**
     * @param args the command line arguments
     */
   public OOP_Java_02(){

}
    public OOP_Java_02(int a, int b)
    {
        marks=a;
        registration=b;
    }
    public OOP_Java_02(int a)
    {
        marks=a;
    }
    
    //Copy Constructors
   OOP_Java_02 OOP_Java_02(OOP_Java_02 s)
   {
       OOP_Java_02 temp = new OOP_Java_02();
       temp.marks = s.marks;
       temp.registration = s.registration;
       return temp;
   }
    
   
    int marks;
    int registration;
    public void set(int a, int b)
    {
        marks = a;
        registration =b;
    }
    public void Display()
    {
        System.out.println("Marks are : \t");
        System.out.println(marks);
        System.out.println("Registration number is : \t");
        System.out.println(registration);            
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        new OOP_Java_02().set(3,9);
   
        
        //Calling default and parametric constructors
       
        OOP_Java_02 var1 = new OOP_Java_02();
        var1.Display();
         OOP_Java_02 var2 = new OOP_Java_02(30);
        var2.Display();
         OOP_Java_02 var3 = new OOP_Java_02(30,90);
        var3.Display();
        OOP_Java_02 var4 = var3;
        var4.Display();
    
    }
    
}
