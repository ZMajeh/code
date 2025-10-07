
Imports System

Module Program
    Sub Main(args As String())
        Dim stack As Stack(Of String) = New Stack(Of String)
        stack.Push("One")
        stack.Push("Two")
        stack.Push("Three")

        While stack.Count() > 0
            Console.WriteLine("Remaining elements : " & stack.Count())
            Console.WriteLine("Number is : " & stack.Pop())
        End While

    End Sub
End Module
