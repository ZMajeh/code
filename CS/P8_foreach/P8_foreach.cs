using Internal;
using System;
namespace ZMajeh
{
    class P8
    {
        public static void Main(string[] args)
        {
            string name="ZMajeh";
            foreach(char c in name)
            {
                Console.WriteLine(c);
            }
            Console.WriteLine("________________________");
            for(int i=0;i<name.Length;i++)
            {
                Console.WriteLine(i+ " " + name[i]);
            }
        }
    }
}