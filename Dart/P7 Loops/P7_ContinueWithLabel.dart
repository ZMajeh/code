void main()
{
  loop1:
  for(int i = 0; i < 10; i++)
  {
    // This is manditory
    print("Outer $i");
    loop2:
    for(int j = 0; j < 10; j++)
    {
      // Until j reaches i, reset j and inc i
      if(i == j)
      {
        continue loop1;
      }
      // Only odd j, inc j if even
      if(j % 2 == 0)
      {
        continue loop2;
      }
      // dont let j cross i, reset j and inc i
      if(j > i)
      {
        break loop2;
      }
      print("\tInner $j");
    }
  }
}