void main()
{
  int x = 100;
  final int y = 3;
  final double z = 2.5;
  final a = x * y * z;    // As we can see here, we can use non final variables in final keyword
  print("Num is $x\nConstant nums are $y $z $a");
}