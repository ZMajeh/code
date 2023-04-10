import "dart:convert";
// List is array
void main()
{
  // Fixed size list
  var myList = List.filled(2, 0);
  // This will throw error
  //  myList.add(10);
  //  myList.add(20);
  // Initialize list
  myList[0] = 10;
  myList[1] = 20;
  print("List is : $myList\nLength is : ${myList.length}");

  // Growable list
  var myListGrow = [10];
  myListGrow.add(20);
  print("Growing List is : $myListGrow\nLength is : ${myListGrow.length}");
  myListGrow.addAll([30, 40, 50]);
  print("Growing List is : $myListGrow\nLength is : ${myListGrow.length}");
  print("Is list empty ${myListGrow.isEmpty}");

  // Empty list
  var emptyList = List.filled(0,0);
  print("Empty list is $emptyList\nLength is : ${emptyList.length}");
  print("Is list empty ${emptyList.isEmpty}");
}