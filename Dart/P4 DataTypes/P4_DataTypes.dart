int x = 100;
double y = 10.01;
String name = "Majeh";
// This is unicode string
Runes nameAgain = new Runes("Triya");
bool itsTrue = true;
bool itsFalse = false;

List myList = ["Majeh", "Triya"];
Map myMap = { "Name":"Majeh"};

void main()
{
  print("Integer $x\nDouble $y\nString $name\nRunes $nameAgain\nBool True $itsTrue\nBool False $itsFalse");
  print("Map data ${myMap["Name"]}");
  print("List data ${myList[0]}, ${myList[1]}");
}