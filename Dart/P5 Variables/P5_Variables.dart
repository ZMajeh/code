// Here we dont need to specify datatype
// Can change dattype in run time
dynamic name = "Majeh";

// Datatype is decided on first initialization
var fixDataType = 10;


void main()
{
  print("Name is $name");
  
fixDataType = 25;
/*
This will cause compile time error
fixDataType = "Majeh";

Error: A value of type 'String' can't be assigned to a variable of type 'int'.
*/
  name = 25;
  print("Age stored in nameis $name");
}