#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "utils.h"
#include "ast.h"
#include "interpreter.h"

int main (int argc, char** argvs) {
  //Check number of arguments
  if(argc != 2){
    printf("Expected 1 argument to commandline.\n");
    exit(-1);
  }

  //Read in AST
  char* filename = argvs[1];
  ScopeStmt* stmt = read_ast(filename);

  //Interpret
  interpret(stmt);
}


