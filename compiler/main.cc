#include <iostream>
#include <memory>
#include "SyntaxTree/SyntaxTree.hpp"
extern int yyparse();
extern int yylineno;
extern std::unique_ptr<compiler::SyntaxTree> root;
int main()
{
	int result =yyparse();
	if (result)
	{
		std::cout<< "the input is valid"<<std::endl;
	}else{
		std::cout<< "the input is valid"<<std::endl;
	}

	std::cout<< root -> toCode() <<std::endl;
	std::cout<< "coded -> " << yylineno <<" lines successfully" <<std::endl;
	return result;
}