Imports System

Module Program
    Sub Main(args As String())
        Dim a As Integer
        For a = 1 To 10
            Console.WriteLine(a)
        Next

        Dim b As String = "Hello"
        Dim c As Char

        Console.WriteLine("")

        For Each c In b
            Console.WriteLine(c)
        Next
    End Sub
End Module
