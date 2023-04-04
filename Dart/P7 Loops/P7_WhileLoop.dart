void main()
{
  int i = 0;
  print("Count with i++");
  while(i++ < 10)
  {
    print("Counting : $i");
  }
  i = 0;
  print("Count with ++i");
  while(++i < 10)
  {
    print("Counting : $i");
  }
}