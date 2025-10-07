using System;
using System.Text;
using System.IO;

// File IO using FileStream
namespace ZMajeh
{
    class P19
    {
        // Writing to file
        static void writeFile(string fileName,string data)
        {
            // Make FileStream object
            // param(Name of file, Mode of file(Create for write), Access of file(write))
            FileStream fs=new FileStream(fileName,FileMode.Create,FileAccess.Write);
            // Check if file can be written
            if(fs.CanWrite)
            {
                // Make buffer and convert string to bytes
                byte[] buffer=Encoding.ASCII.GetBytes(data);
                // Write buffer to output
                fs.Write(buffer,0,buffer.Length);
            }
            // Flush and close FileStream
            fs.Flush();
            fs.Close();
        }
        // Reading from file
        static string readFile(string fileName)
        {
            // Open FileStream in read mode
            FileStream fs=new FileStream(fileName,FileMode.Open,FileAccess.Read);
            // Make output biffer
            string output="";
            // Check if we able to read file
            if(fs.CanRead)
            {
                // Make buffer of same length as file
                byte[] buffer=new byte[fs.Length];
                // Read from file to buffer
                int readed=fs.Read(buffer,0,buffer.Length);
                // Conver bytes to string
                output=Encoding.ASCII.GetString(buffer,0,readed);
            }
            // Read is done, so flush to output and close file
            fs.Flush();
            fs.Close();
            // Return our output buffer
            return output;
        }
        // This is where program execution starts
        public static void Main(string[] args)
        {
            // This is our test file
            string fileName="P19_FileStream/myFile.dat";
            // this is our test buffer to write to file and then read again
            string data="Hello world";
            // Write to file and read back
            writeFile(fileName,data);
            string output=readFile(fileName);
            // Print output to console
            Console.WriteLine("File contents : \n"+output);
        }
    }
}