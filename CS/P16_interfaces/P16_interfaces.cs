using System;
namespace ZMajeh
{
    class P16 : interface1,interface2
    {
        public static void Main(string[] args)
        {
            P16 myObj=new P16();
            myObj.printOne();
            myObj.printTwo();
            Console.WriteLine("From main");
            myObj.display();
        }
        // All methods from interface should or must be public
        public void printOne()
        {
            Console.WriteLine("From interface 1");
            display();
        }
        public void printTwo()
        {
            Console.WriteLine("From interface 2");
            display();
        }
        public void display()
        {
            Console.WriteLine("\tDisplaying");
        }
    }
}