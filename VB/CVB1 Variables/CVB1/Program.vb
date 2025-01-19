Imports System

Module Program
    Sub Main(args As String())
        ' Variables are created using dim
        ' Syntax: Dim <VarName> As <Type>
        ' Declaring
        Dim Name As String
        ' Assigning
        Name = "Anand"

        Dim a, b, c As Integer
        a = 10
        b = 20
        c = a + b

        ' Can declare any number of variables
        Dim x, y, z As Double

        x = 22
        y = 7
        z = x / y

        ' Can use & to concat string
        Console.WriteLine("Double value is : " & z.ToString())

        ' Can use + to concat string
        Console.WriteLine("Hello world from : " + Name + ", And sum is : " + c.ToString())

        Dim Name1 As String
        Console.WriteLine("Enter your name : ")
        Name1 = Console.ReadLine
        Console.WriteLine("Hello " + Name1 + ", How are you?")
        ' Wait for user before closing
        Console.ReadLine()

    End Sub
End Module
