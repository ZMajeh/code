Imports System

Module Program
    Sub Main(args As String())
        ' Array have LBound and UBound as index for first and last element
        ' We provide index of last element in Dim to create it
        Dim arr(10) As Integer
        arr(0) = 100        ' LBound
        arr(1) = 200
        arr(2) = 300
        arr(3) = 400
        arr(4) = 500
        arr(5) = 600
        arr(6) = 700
        arr(7) = 800
        arr(8) = 900
        arr(9) = 1000
        arr(10) = 1100      ' UBound

        Console.WriteLine("Array created with LBound : " & LBound(arr) & " and UBound:" & UBound(arr))

        Dim i As Integer

        For i = LBound(arr) To UBound(arr)
            Console.WriteLine("Index : " & i & " Value : " & arr(i))
        Next

    End Sub
End Module
