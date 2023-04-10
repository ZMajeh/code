import "dart:convert";
// List is array
void main()
{
  // Growable list
  var myListGrow = [10];
  myListGrow.add(20);
  print("Growing List is : $myListGrow\nLength is : ${myListGrow.length}");
  myListGrow.addAll([30, 40, 50]);
  print("Growing List is : $myListGrow\nLength is : ${myListGrow.length}");
  print("Is list empty ${myListGrow.isEmpty}");
  print("Is list not empty ${myListGrow.isNotEmpty}");

  print("First element : ${myListGrow.first}");
  print("Last element : ${myListGrow.last}");

  // Reversing list
  print("Reversed list ${myListGrow.reversed}");
}