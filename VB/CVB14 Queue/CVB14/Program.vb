
Imports System

Module Program
    Sub Main(args As String())
        Dim queue As Queue(Of String) = New Queue(Of String)
        queue.Enqueue("One")
        queue.Enqueue("Two")
        queue.Enqueue("Three")

        While queue.Count() > 0
            Console.WriteLine("Remaining elements : " & queue.Count())
            Console.WriteLine("Number is : " & queue.Dequeue())
        End While

    End Sub
End Module
