//
// Created by mandz on 06/10/2023.
//
#include <iostream>
using std::string;

string numlib[][3] = {
            { " _ ", "| |", "|_|" }, // 0
            { "   ", "  |", "  |" }, // 1
            { " _ ", " _|", "|_ " }, // 2
            { " _ ", " _|", " _|" }, // 3
            { "   ", "|_|", "  |" }, // 4
            { " _ ", "|_ ", " _|" }, // 5
            { "   ", "|_ ", "|_|" }, // 6
            { " _ ", "|_|", "|_|" }, // 7
            { " _ ", "| |", "|_|" }, // 8
            { " _ ", "|_|", "  |" }, // 9
            { "   ", "   ", "   " }, // SPACE
            { " _ ", "|_ ", "|_ " }, //ERROR
};

string top, mid, bot;
void build(int idx){
    top += numlib[idx][0]; mid += numlib[idx][1]; bot +=numlib[idx][2];
}

int main(){
    string user_input;
    std::cout<<"Enter a number: \n";
    std::getline(std::cin >> std::ws,user_input);

    for(char c : user_input){
        if(c-'0' >= 0 && c-'0' <=9){build(c-'0');}
        else if(c == ' '){build(10);}
        else{build(11);}
    }
    std::cout<<top<<std::endl<<mid<<std::endl<<bot;
    return 0;
}
