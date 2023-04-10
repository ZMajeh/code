void main()
{
    String s1 = "10";
    String s2 = "10.10";
    double d1 = 10/3;
    print("Num version of $s1 is ${num.parse(s1)}");
    print("Num version of $s2 is ${num.parse(s2)}");
    print("Is 10/3 finite : ${d1.isFinite}");
}