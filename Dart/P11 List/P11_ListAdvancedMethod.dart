void main()
{
  var myList = [10,20];
  // List data 10 20
  // Adding data to list
  myList.add(30); // Append element
  // List data 10 20 30
  myList.addAll([40,50]); // Append List
  // List data 10 20 30 40 50
  myList.insert(4, 45);
  // List data 10 20 30 40 45 50
  myList.insertAll(1, [11, 12, 13, 14, 15]);
  // List data 10 11 12 13 14 15 20 30 40 45 50

  // Printing list
  print("My list : $myList");

  // Print n'th element
  print("My list 2nd element : ${myList[2]}");

  // Manipulate list
  // Index modify
  myList[0] = 0;
  // List data 0 11 12 13 14 15 20 30 40 45 50
  print("My list : $myList");
  // Replace range( from, to), replaces till to - 1
  myList.replaceRange(1, 5, [5]);
  // List data 0 5 15 20 30 40 45 50
  print("My list : $myList");
  
  // Remove specific data
  myList.remove(0);
  // List data 5 15 20 30 40 45 50
  print("My list : $myList");
  
  // Remove index value
  myList.removeAt(1);
  // List data 5 20 30 40 45 50
  print("My list : $myList");

  // Remove last index value
  var last = myList.removeLast();
  // List data 5 20 30 40 45
  print("My list : $myList, removed last value is $last");
  
  // Remove range
  myList.removeRange(1, 2);
  // List data 5 30 40 45
  print("My list : $myList");

}