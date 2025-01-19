using Internal;
using System;
namespace ZMajeh
{
    class P17
    {
        public static void Main(string[] args)
        {
            int x,y,z;
            // Library exception handling
            try
            {
                Console.WriteLine("Lets divide number by zero");
                x=1;
                y=0;
                z=x/y;
                Console.WriteLine("Value of Z : "+z);
            }
            catch (Exception e)
            {
                Console.WriteLine("Error occured : "+e.Message);
            }
            finally
            {
                x=-1;y=-1;z=-1;
                Console.WriteLine("Data is cleared\n___________________");
            }
            // Manual exception handling
            try
            {
                Console.WriteLine("Throwing error manually");
                throw new Exception("ZMajeh's manual error");
            }
            catch (Exception e)
            {
                Console.WriteLine("Error occured : "+e.Message);
            }
            finally
            {
                Console.WriteLine("This will always run");
            }
        }   
    }
}