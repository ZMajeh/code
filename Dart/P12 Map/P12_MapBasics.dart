void main()
{
  // Map creation
  // Map using literal
  var myMap = { 'key1':'value1',
                'key2':'value2',
                'key3':'value3',
                'key4':'value4'};
  print("My map : $myMap");

  // Map using constructor
  var myMap1 = new Map();
  myMap1['key1'] = 'value1';
  myMap1['key2'] = 'value2';
  myMap1['key3'] = 'value3';
  myMap1['key4'] = 'value4';
  print("My map 1 : $myMap1");
}