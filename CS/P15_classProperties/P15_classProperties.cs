using System;
namespace ZMajeh
{
    class P15
    {
        public static void Main(string[] args)
        {
            MyClass myClass=new MyClass();
            // This are class properties, not simple variables
            // This is similar to getter and setter methods
            myClass.myLen=100;
            myClass.myBredth=5;
            Console.WriteLine(myClass.myArea);

            // No set is declared for area, so its read only
            // Following line generate error
            // myClass.myArea=100;
        }
    }
}