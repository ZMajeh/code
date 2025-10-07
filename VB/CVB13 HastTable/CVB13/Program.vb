Imports System

Module Program
    Sub Main(args As String())
        Dim ht As Hashtable = New Hashtable
        ht.Add(101, "ZMajeh")
        ' Key cannot be same
        ' ht.Add(101, "Hydra")
        ht.Add(102, "Hydra")
        ' This is very fast to check if item is existing in hast table
        If ht.ContainsKey(101) Then
            Console.WriteLine(ht.Item(101) & " exists")
        End If
        ' Also can check if value is existing in hash table
        If ht.ContainsValue("Hydra") Then
            Console.WriteLine(ht.Item(102) & " is " & 102)
        End If
    End Sub
End Module
