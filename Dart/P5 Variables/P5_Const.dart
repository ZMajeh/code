void main()
{
  int num = 13;
  const x = 10;
  const int y = 100;
  const double z = x * y / 3.14;
  print("Number $num \nConstant Numbers $x $y $z");
  /* This will give error
  const int a = 10 + x;

  Error compile time
  Error: Not a constant expression.
  */
}