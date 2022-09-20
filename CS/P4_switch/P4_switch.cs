using Internal;
using System;
namespace ZMajeh
{
    class P4
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Enter age : ");
            int age = int.Parse(Console.ReadLine());
            switch(age)
            {
                case 0:
                Console.WriteLine("Kid you are not born yet");
                break;
                case 5:
                Console.WriteLine("Cute kid");
                break;
                case 10:
                Console.WriteLine("Go to school kid");
                break;
                case 18:
                Console.WriteLine("Get ellection card");
                break;
                case 25:
                Console.WriteLine("Struggling to survive");
                break;
                case 50:
                Console.WriteLine("Good life");
                break;
                case 90:
                Console.WriteLine("OMG");
                break;
                case 105:
                Console.WriteLine("Legend");
                break;
                default:
                Console.WriteLine("Wrong age");
                break;
            }
        }
    }
}