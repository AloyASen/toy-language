#include <iostream>
#include <memory>
#include "SyntaxTree/SyntaxTree.hpp"
extern int yyparse();
int main()
{
	int result =yyparse();
	if (result)
	{
		std::cout<< "the input is valid"<<std::endl;
	}else{
		std::cout<< "the input is valid"<<std::endl;
	}

	std::cout<< "coded -> lines successfully" <<std::endl;
	return result;
}