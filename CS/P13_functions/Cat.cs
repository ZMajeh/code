using Internal;
using System;
namespace ZMajeh
{
    class Cat
    {
        private string name=string.Empty;
        private int age;
        public void Hiss()
        {
            Console.WriteLine("Hiss");
        }
        public void Mew()
        {
            Console.WriteLine("Nyan");
        }
        public static void Meow()
        {
            Console.WriteLine("Static Meow");
        }
        public string getName()
        {
            return name;
        }
        public int getAge()
        {
            return age;
        }

        public void setName(string name)
        {
            this.name=name;
        }
        public void setAge(int age)
        {
            this.age=age;
        }
 
        
        public void set(string name,int age)
        {
            this.name=name;
            this.age=age;
        }
        public void perform(string act,int number)
        {
            for(int i=1;i<=number;i++)
                Console.WriteLine(name+" : "+act+" "+i+" times");
        }
    }
}