/*
	 BosCompiler v1.1 , Licensed under GNU GPL v2.0 . 
	 For more information , visit http://www.gnu.org/licenses/gpl-2.0.html .
	 Developed by Reo Studio @ 2015 - 2016
*/

#ifndef COMPILE_PARSER_HPP

#define COMPILE_PARSER_HPP

#include<iostream> // For string class.
#include<list> // For list class.

using namespace std;

class Variable
{
public:
    bool isStatic;
    string var_name;
    string var_type;
};

/*
    Note : This class is for parsing the tokens generated by scanner.

*/
class Parser
{
public:

    Parser(list<string> , int );

    bool parse(string , string );
    list<string> getCodes( );
    list<string> getErrors( );

private:
    void parseIf(list<Variable> & var_list, list<string>::iterator& , list<string> );

    list<string> tokens;
    list<string> generated_codes;
    list<string> errors;
    int gen_code;
};

#endif // COMPILE_PARSER_HPP
