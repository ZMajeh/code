Imports System
Class a
    Public name As String
    Public Sub setName(ByVal name As String)
        Me.name = name
    End Sub
    Public Function getName()
        Return name
    End Function
End Class
Module Program
    Sub Main(args As String())
        Dim x As a = New a()
        x.setName("ZMajeh")
        Console.WriteLine(x.getName)
    End Sub
End Module
