void main()
{
  var myMap = {'Name':'Majeh'};
  // Adding value to literal map
  myMap['Job'] = "King of hell";
  print("My map : $myMap");

  // Keys
  print("Keys ${myMap.keys}");
  // Values
  print("Values ${myMap.values}");
  // Length
  print("Length ${myMap.length}");
  // Is empty
  print("Is empty ${myMap.isEmpty}");
  // Is not empty
  print("Is not empty ${myMap.isNotEmpty}");

  var map2 = new Map();
  map2.addAll(myMap);
  print("New map $map2");
  map2['Extra data'] = 'Extra';
  print("New map $map2");
  map2.remove("Extra data");
  print("New map $map2");
  map2.clear();
  print("New map $map2");
  print("New map is empty ${map2.isEmpty}");

  // For each
  myMap.forEach((k, v) => { print("Found data key $k and value $v")});

}