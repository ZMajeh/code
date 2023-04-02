void main()
{
  // ~/ division with integer result
  print("Getting integer division result" +
        "\n\tDivision : 10 / 3 = ${10 / 3}" +
        "\n\tQuotient : 10 ~/ 3 = ${10 ~/ 3}" +
        "\n\tReminder : 10 % 3 = ${10 % 3}\n");

  // Type checking using is, is!
  print("Type checking using is, is!");
  int x = 100;
  var y = "Majeh";
  dynamic z = 10;
  z="Triya";
  // is
  print("\n\tis:");
  print("\t\tx: $x is int ${x is int}\n" +
        "\t\ty: $y is string ${y is String}\n" +
        "\t\tz: $z is int ${z is int}\n" +
        "\t\tz: $z is string ${y is String}\n");

  // is!
  print("\n\tis!:");
  print("\t\tx: $x is! int ${x is! int}\n" +
        "\t\ty: $y is! string ${y is! String}\n" +
        "\t\tz: $z is! int ${z is! int}\n" +
        "\t\tz: $z is! string ${y is! String}\n");

  // Assignment
  print("\nAssignment, ??= : only assign if variable is null/un initialised");
  var nullVar;
  nullVar ??= 10;
  nullVar ??= "Majeh";
  dynamic nullDVar;
  nullDVar ??= 10;
  nullDVar ??= "Majeh";
  print("nullVar is $nullVar");
  print("nullDVar is $nullDVar");

  // Ternary ?: and ??
  print("Ternary ?: and ??");
  int m1 = 10, m2 = 20;
  int m3 = m1 > m2 ? m1 : m2;
  print("\t$m1 > $m2 ? $m1 : $m2 = $m3");
  var m4, m5="Not null";
  var m6 = m4 ?? m5;
  print("\t$m4 ?? $m5 = $m6");
  var m7 = m5 ?? m4;
  print("\t$m5 ?? $m4 = $m7");
}