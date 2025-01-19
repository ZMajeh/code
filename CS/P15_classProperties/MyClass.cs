namespace ZMajeh
{
    /* Get and Set method can do all kind of preprocessing
    They are normal functions, which are called 
    like normal variables of class*/
    class MyClass
    {
        private int length,bredth;

        // Insted of getter and setter we use this
        public int myLen
        {
            // This is similar to void setLength(int len)
            set
            {
                length=value;
            }
            // This is similar to int getLength();
            get
            {
                return length;
            }
        }
        public int myBredth
        {
            set
            {
                bredth=value;
            }
            get
            {
                return bredth;
            }
        }
        // This is read only class property
        public int myArea
        {
            get
            {
                return myLen*myBredth;
            }
            // No set is declared, so if we try to initialize it
            // It will throw error
        }
    }
}