Imports System

Module Program
    Sub Main(args As String())
        Dim arr(3) As Integer
        Console.WriteLine("With preserver resize : ")
        arr(0) = 100
        arr(1) = 200
        arr(2) = 300
        arr(3) = 400
        'arr(4) = 500 ' Throws Exception
        ' Preserve is used to save old values in new array
        ReDim Preserve arr(4)
        arr(4) = 500
        For c = LBound(arr) To UBound(arr)
            Console.WriteLine(arr(c))
        Next

        Console.WriteLine("Without preserver resize : ")
        arr(0) = 100
        arr(1) = 200
        arr(2) = 300
        arr(3) = 400
        ' This will only resize array and clean old values
        ReDim arr(4)
        arr(4) = 500
        For c = LBound(arr) To UBound(arr)
            Console.WriteLine(arr(c))
        Next
    End Sub
End Module
