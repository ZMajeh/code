Imports System

Module Program
    Sub Main(args As String())
        ' List is generic, so List(of <type>)
        Dim lst As List(Of String) = New List(Of String)
        ' All variables are objects in VB
        Dim lst1 As List(Of String) ' Declare of object type List(Of String) == No memory yet
        lst1 = New List(Of String)  ' Initializing the memory for List
        ' If not assigned memory, it will throw NullReferenceException

        ' Add or insert to list
        lst.Add("One")
        lst.Add("Two")
        lst.Add("Three")
        ' This will sort list
        lst.Sort()
        lst.Insert(0, "Four")
        Dim str As String
        ' This is how we access the list
        For Each str In lst
            Console.WriteLine(str)
        Next
    End Sub
End Module
