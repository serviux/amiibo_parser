/*
The point of this program is to parse the amiibo file from nintendo .
for more information on the program's details check out the following
link. It provides details on the file structure required for amiibo generation
https://www.3dbrew.org/wiki/Amiibo

*/

#include<iostream>
#include<fstream>
#include<memory>

//the number of bytes in the amiibo file
const int SIZE = 540;

int main(int argc, char** argv){
        if(argc < 2 ){
                std::cout<<"No file was provided" << "\n";
                return 1;
        }


        try {
                
                std::ifstream in;
                in.open(argv[1], std::ios::binary);
                in.seekg(0, in.end);
                int length = in.tellg();
                in.seekg(0, in.beg);
                //1 byte == 1 char
                char buffer[SIZE];
                in.read(buffer, length);


                //Page size is 4 bytes
                //Page 0x15  is the start of the data section of the amiibo


        }catch (...) {
                std::cout<<"An error occurred when processing file" <<"\n";
        }

        return 0;
}