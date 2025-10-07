Imports System

Module Program
    Sub Main(args As String())
        Dim a As Integer = 0
        Do
            a += 1
            Console.WriteLine(a)
            If a = 10 Then
                Exit Do
            End If
        Loop
    End Sub
End Module
