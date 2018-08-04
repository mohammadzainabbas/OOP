package oop_java_01;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author acer
 */
class Test
{
    double number;
    Test()
    {}
    Test(double n)
    {
        number=n;
    }
    Test (Test a)
    {
        number=a.number;
    }
    void Display(int num)
    {
        number = num;
        
        System.out.println(number);
    }
}
public class Lab_Task extends Test {
    void Print()
    {
        Display(5);
    }
}
