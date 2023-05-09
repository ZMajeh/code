void main()
{
  bool x = 10 < 5;
  print("10 < 5 $x");

  // Here only true and false is considered as  boolean, all other things are false
  // This will throw exception
  var str = 'Majeh';
  if(str as bool)
  {
    print("String is $str");
  }
  else
  {
    print("Any string considered as false");
  }
}