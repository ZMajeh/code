void main()
{
  String normalString = "Majeh";
  print("Normal string $normalString");

  String usingSingleQuote = 'Still Majeh';
  print("Using Single Quote $usingSingleQuote");
  
  String usingDoubleQuotes = "Still Majeh";
  print("Using Double Quotes $usingDoubleQuotes");

  String usingTrippleQuotes = '''Still 
  Majeh
  but
  new
  lines
  ''';
  print("Using Tripple Quotes $usingTrippleQuotes");

  String usingHexaQuotes = """Still 
  Majeh
  but
  new
  lines
  """;
  print("Using Hexa Quotes $usingHexaQuotes");
}