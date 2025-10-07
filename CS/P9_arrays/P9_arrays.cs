using Internal;
using System;
namespace ZMajeh
{
    class P9
    {
        public static void Main(string[] args)
        {
            //Arrays

            // 1- Ram
            // 2- Shaym
            // 3- Sita

            string[] people=new string[3];
            people[0]="Ram";
            people[1]="Shyam";
            people[2]="Sita";
            for(int i=0;i<people.Length;i++)
            {
                Console.WriteLine(i+" "+people[i]);
            }
            Console.WriteLine("________________");
            foreach(string name in people)
            {
                Console.WriteLine(name);
            }

        }
    }
}