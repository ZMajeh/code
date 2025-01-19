using Internal;
using System;
using System.Collections.Generic;
namespace ZMajeh
{
    class P10
    {
        public static void Main(string[] args)
        {
            List<string> myList=new List<string>();
            myList.Add("Ram");
//            myList.Add("Shyam");
            myList.Add("Sita");
            myList.Insert(1,"Shyam");
            foreach(string name in myList)
            {
                Console.WriteLine(name);
            }
            Console.WriteLine("________________");

            List<int> myList1=new List<int>();
            myList1.Add(19);
            myList1.Add(21);
            myList1.Add(18);
            foreach(int age in myList1)
            {
                Console.WriteLine(age);
            }
            Console.WriteLine("________________");

            for(int i=0;i<myList.Count;i++)
            {
                Console.WriteLine(myList[i] + " : " + myList1[i]);
            }
        }
    }
}