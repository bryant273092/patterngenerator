#include <iostream>

int get_user_input(){
    int input;
    std::cin >> input;
    return input;
}

std::string generate_line(int input, int block_line){
    std::string indentation(input - block_line - 1,' ');
    std::string cieling((block_line * 2) + 3, '*');
    std::string block = indentation + cieling;                       
    return  block;
}
std::string generate_wall(int input, int block_line){
    std::string indentation(input - block_line - 1,' ');
    std::string wall = "*";
    for ( unsigned int i = 0; i <= (block_line); i++ ){ 
        wall += " *";
    }
    std::string block = indentation + wall;                       
    return  block;
}

void print_blocks(int input){
    int block_line = 0;
    while(block_line < input){ 
        std::string cieling = generate_line(input, block_line);
        std::string wall = generate_wall(input, block_line);
        std::cout << cieling << std::endl;
        std::cout << wall << std::endl;
        block_line++;
    }
    std::string last((input *2)+1, '*');
    std::cout << last << std::endl;
}

int main(){
    print_blocks(get_user_input());
    return 0;
}



