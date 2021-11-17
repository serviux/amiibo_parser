#include<iostream>
#include<fstream>

int main(int argc, char** argv){
        if(argc < 2 ){
                std::cout<<"No file was provided" << "\n";
                return 1;
        }

        try {
                std::ifstream in;
                in.open(argv[1], std::ios::binary);
        }catch (...) {
                std::cout<<"An error occurred when processing file" <<"\n";
        }

        return 0;
}