void main()
{
  print("Top loop");
  topLoop:
    for(int i = 0;i < 10;i++)
    {
      print("Top $i");
      inLoop:
        for(int j = 0;j < 10;j++)
        {
          print("\tInside $j");
          if(j > i)
          {
            break inLoop;
          }
          if(j==4)
          {
            break topLoop;
          }
        }
    }
}