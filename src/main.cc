#include<iostream>
#include "Stack.hh"

int main()
{
    Stack* stack{new Stack};

    stack->Print();

    stack->Add(new Book("libro 1", "autor 1"));
    stack->Print();

    stack->Add(new Book("libro 2", "autor 2"));
    std::cout << std::endl;
    stack->Print();

    stack->Add(new Book("libro 3", "autor 3"));
    std::cout << std::endl;
    stack->Print();

    stack->Pop();
    std::cout << std::endl;
    stack->Print();

    std::cout << std::endl;
    std::cout << stack->Peek()->GetName() << std::endl;
    std::cout << stack->Peek()->GetAuthor() << std::endl;
    
    // std::cout << "Hello stacks" << std::endl;

    std::cin.get();

    delete stack;
    return 0;
}