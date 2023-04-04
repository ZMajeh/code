void main()
{
  int i;
  for(i = 0; i < 3; i++)
  {
    switch(i)
    {
      case 0: 
        {
          print("Found 0");
        } 
      break;
      case 1: 
        {
          print("Found 1");
        } 
      break;
      default: 
        {
          print("Found 2");
        } 
      break;
    }
  }

  int a = 10, b = 20, c = 30;
  if(a < b)
  {
    print("$a < $b");
  }
  else
  {
    print("$a > $b");  
  }

  if(a < b)
  {
    if(a < c)
    {
      print("$a < all");
    }
  }
  else if(b < c)
  {
    print("$b < all");  
  }

  
}