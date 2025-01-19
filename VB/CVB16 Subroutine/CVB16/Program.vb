Imports System

Module Program

    ' Module scope
    Dim globalInteger As Integer

    Sub Main(args As String())
        Console.WriteLine("Function by reference")
        Dim num As Integer = 0
        While num < 10
            num += 1
            incr(num)
            Console.WriteLine("Number is " & num)
        End While

        Console.WriteLine()
        Console.WriteLine("Function by Value")
        num = 0
        While num < 10
            num += 1
            incrbv(num)
            Console.WriteLine("Number is " & num)
        End While
    End Sub

    ' Funtion with parameter by reference
    Sub incr(ByRef num As Integer)
        num += 1
    End Sub

    ' Funtion with parameter by value
    Sub incrbv(ByVal num As Integer)
        num += 1
    End Sub
End Module
