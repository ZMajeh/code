Imports System

Module Program

    Dim num As Integer

    Sub Main(args As String())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
        Console.WriteLine("Number is : " & count())
    End Sub

    ' Function can return a value also
    Function count() As Integer
        num += 1
        Return num.ToString()
    End Function
End Module
