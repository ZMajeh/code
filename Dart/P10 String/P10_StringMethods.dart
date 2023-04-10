void main()
{
  String s1 = "King ";
  String s2 = "Majeh";
  // Basic string methods
  print("String 1 $s1");
  print("String 2 $s2");
  print("Concat $s1+$s2 = ${s1+s2}");
  print("Upper case ${s1.toUpperCase()}");
  print("Lower case ${s1.toLowerCase()}");
  print("Upper case ${(s1+s2).toUpperCase()}");
  print("Trimmed ${s1.trim()+s2}");
  print("Compare $s1 to $s2 ${s1.compareTo(s2)}");
  print("Compare $s1 to $s1 ${s1.compareTo(s1)}");
  print("Replace $s1 to KingMajeh : ${s1.replaceAll("King ", "KingMajeh")}");

  // More useful methods for manipulation
  String s3 = "Majeh,Dohwa";
  print("List   : ${s3.split(",")}");
  print("First  : ${s3.split(",")[0]}");
  print("Second : ${s3.split(",")[1]}");
  
  String s4 = "King Majeh";
  print("String : $s4");
  print("Pre sub string : ${s4.substring(0,4)}");
  print("Pos sub string : ${s4.substring(5,10)}");
  print("Pos sub string : ${s4.substring(5)}");

  // Convert to string
  int a = 10;
  double b = 10.10;
  print("Number $a to string is ${a.toString()}");
  print("Number $b to string is ${b.toString()}");
}