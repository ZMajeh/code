Imports System

Module Program
    Sub Main(args As String())
        Dim x As String
        Console.WriteLine("Enter password:")
        x = Console.ReadLine()
        If x.Equals("12345") Then
            Console.WriteLine("Entry level access granted")
        ElseIf x.Equals("1029384756") Then
            Console.WriteLine("Admin level access granted")
        Else
            Console.WriteLine("Access denine")
        End If

        Select Case x

            Case "12345"
                Console.WriteLine("Welcome to enduser's portal")

            Case "1029384756"
                Console.WriteLine("Welcome to admin's portal")

            Case Else
                Console.WriteLine("Try again latter")
        End Select
    End Sub
End Module
