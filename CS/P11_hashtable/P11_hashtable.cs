using Internal;
using System;
using System.Collections;
namespace ZMajeh
{
    class P11
    {
        public static void Main(string[] args)
        {
            Hashtable myTable=new Hashtable();
            myTable.Add(101,"Ram");
            myTable.Add(102,"Shyam");
            myTable.Add(103,"Sita");
            foreach(int ID in myTable.Keys)
            {
                Console.WriteLine(ID);
            }
            Console.WriteLine("______________________________");
            foreach(string Values in myTable.Values)
            {
                Console.WriteLine(Values);
            }
            Console.WriteLine("______________________________");
            Console.WriteLine("101 "+myTable[101]);
            Console.WriteLine("102 "+myTable[102]);
            Console.WriteLine("103 "+myTable[103]);
        }
    }
}