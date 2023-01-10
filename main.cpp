#include <iostream>
#include <conio.h>

int main(){
    int input;
    std::string designation;
    std::cout<<"designaation: ";
    std::cin>>designation;

    if(designation == "admin"){
        system("cls");
        std::cout<<"Select Option:\n\n";
        std::cout<<"****************************************************************\n";
        std::cout<<"1.\t Create\n";
        std::cout<<"2.\t Edit\n";
        std::cout<<"3.\t Delete\n";
        std::cout<<"Enter your option:(1-3): ";
        std::cin>>input;

        switch(input){
            case 1:
                system("cls");
                std::cout<<"create";
                break;
            case 2:
                system("cls");
                std::cout<<"edit";
                break;
            case 3:
                system("cls");
                std::cout<<"delete";
                break;
        }
    }else{
        system("cls");
        std::cout<<"1.\t Search\n";
        std::cout<<"2.\t List\n";
        std::cout<<"Enter your option:(1-3): ";
        std::cin>>input;

        switch (input){
            case 1:
                system("cls");
                std::cout<<"search";
                break;
            case 2:
                system("cls");
                std::cout<<"list";
                break;
        }
    }
    return 0;
}
