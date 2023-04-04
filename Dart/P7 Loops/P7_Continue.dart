// To print odd numbers only
void main()
{
  int i = -1;
  while(i < 10)
  {
    i++;
    if(i % 2 == 0)
    {
      continue;
    }
    print("Counting odd numbers only $i");
  }
}