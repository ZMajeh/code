using Internal;
using System;
using System.IO;

// File input and output is done here
namespace ZMajeh
{
    class P18
    {
        // This writes the file
        static void writeFile(string fileName,string data)
        {
            File.WriteAllText(fileName,data);
        }
        // This reads the file
        static string readFile(string fileName)
        {
            // To read in text format
            return File.ReadAllText(fileName);
            // To read in string array
            //return File.ReadAllLines(fileName);
        }
        // Program starts here
        public static void Main(string[] args)
        {
            // Init file and data to write and read
            string filename="P18_FileIO/myFile.dat";
            string data="hello world";
            writeFile(filename,data);
            string output=readFile(filename);

            Console.WriteLine("File contents are: \n "+output);
        }
    }
}