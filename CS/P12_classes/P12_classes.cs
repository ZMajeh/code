using System;
using ZMajeh;
namespace ZMajeh
{

    class P12    {
        public static void Main(string[] args)
        {
            Person []p=new Person[3];
            p[0]=new Person();p[0].name="Ram";p[0].age=19;
            p[1]=new Person();p[1].name="Ram";p[1].age=21;
            p[2]=new Person();p[2].name="Ram";p[2].age=18;
            foreach(Person person in p)
            {
                Console.WriteLine(person.age+" "+person.name);
            }
        }
    }
}