using Internal;
using System;
namespace ZMajeh
{
    class P13
    {
        public static void Main(string[] args)
        {
            Cat cat1,cat2,cat3;
            cat1=new Cat();cat1.setName("Kitty");cat1.setAge(14);
            cat2=new Cat();cat2.set("Kalu",11);
            cat3=new Cat();cat3.set("Molu",9);
            cat1.Hiss();
            cat2.Mew();
            cat3.Hiss();
            Console.WriteLine("______________");
            cat2.Hiss();
            cat3.Mew();
            cat1.Hiss();
            Console.WriteLine("______________");
            cat3.Hiss();
            cat1.Mew();
            cat2.Hiss();
            Cat.Meow();
            Console.WriteLine(cat1.getAge()+" "+cat1.getName());
            Console.WriteLine(cat2.getAge()+" "+cat2.getName());
            Console.WriteLine(cat3.getAge()+" "+cat3.getName());

            cat1.perform("eat",5);
            cat2.perform("jump",10);
            cat3.perform("sleep",2);
        }
    }
}