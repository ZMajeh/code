import 'P13_LibraryExample.dart';

// This is to access MirrorSystem and LibraryMirror
import 'dart:mirrors'; 
void main()
{
  // Library name stored in symbol
  Symbol myLib = new Symbol("foo");
  Symbol myClass = new Symbol("demo");

  // To access all libraries and classes we can use mirror system
  MirrorSystem mirrorSystem = currentMirrorSystem();
  LibraryMirror libMirror = mirrorSystem.findLibrary(myLib);
  if(libMirror != null)
  {
    print("Found library");
    print("checkng...class details..");
    print("No of classes found is : ${libMirror.declarations.length}");
    libMirror.declarations.forEach((s, d) => print(s));
    if (libMirror.declarations.containsKey(myClass))
    {
      print("Class is found in library");
    }
    else
    {
      print("Class is not found in library");
    }
  }
}