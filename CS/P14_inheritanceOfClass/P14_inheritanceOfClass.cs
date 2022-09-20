using System;
namespace ZMajeh
{
    class P14
    {
        public static void Main(string[] args)
        {
            Cat cat=new Cat();
            cat.name="Kitty";
            cat.age=18;
            cat.hasSharpNails=false;
            cat.lovesToMew=true;

            Animal cat1=new Boka();
            cat1.name="Kitty";
            cat1.age=18;
            ((Cat)cat1).hasSharpNails=false;
            ((Cat)cat1).lovesToMew=true;
            ((Boka)cat1).isIndian=true;

            Console.WriteLine("Cat name               (Animal) : "+cat1.name);
            Console.WriteLine("Cat age                (Animal) : "+cat1.age);
            Console.WriteLine("Cat sharp nails        (Cat)    : "+((Cat)cat1).hasSharpNails);
            Console.WriteLine("Cat loves to mew       (Cat)    : "+((Cat)cat1).lovesToMew);
            Console.WriteLine("Cat is Indian          (Boka)   : "+((Boka)cat1).isIndian);
            Console.WriteLine("Cat understand marathi (Boka)   : "+((Boka)cat1).understandMarathi);  
            
            // Superclass can refer to subclass but
            // Subclass cannot refer to super class
            // This will generate run time exception
            //Cat myAnimal1=(Cat)new Animal();
            //Boka myAnimal2=(Boka)new Animal();
        }
    }
}