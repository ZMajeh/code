Imports System

Module Program
    Sub Main(args As String())
        Dim a As Integer

        a = 0
        Console.WriteLine("While")
        While a < 10
            a += 1
            Console.WriteLine(a)
        End While

        a = 0
        Console.WriteLine("Do")
        Do
            a += 1
            Console.WriteLine(a)
            If a >= 10 Then
                Exit Do
            End If
        Loop

        a = 0
        Console.WriteLine("Do until")
        Do Until a >= 10
            a += 1
            Console.WriteLine(a)
        Loop

        a = 0
        Console.WriteLine("Do while")
        Do While a < 10
            a += 1
            Console.WriteLine(a)
        Loop
    End Sub
End Module
