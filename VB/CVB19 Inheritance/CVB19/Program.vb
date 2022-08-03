Imports System

Class a
    Public name As String
    Public Function GetName()
        Return name
    End Function
End Class

Class b
    Inherits a
    Public Function GetName()
        Return "Virtual is available"
    End Function
End Class
Module Program
    Sub Main(args As String())
        Dim c As a = New b()
        c.name = "No virtual available"
        Console.WriteLine(c.GetName())
    End Sub
End Module
