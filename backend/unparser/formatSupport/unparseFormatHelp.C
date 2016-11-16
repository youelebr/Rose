// tps (01/14/2010) : Switching from rose.h to sage3.
#include "sage3basic.h"
#include "unparseFormatHelp.h"

#include <iostream>

#define DBG_MAQAO std::cerr<<"In "<<__FILE__<<" FUNCTION "<<__FUNCTION__<<" , line: "<<__LINE__<<"\n"; //DBG_MAQAO
UnparseFormatHelp::~UnparseFormatHelp()
   {}

// return: > 0: start new lines; == 0: use same line; < 0:default
int
UnparseFormatHelp::getLine( SgLocatedNode* node, SgUnparse_Info& info, FormatOpt opt)  
   {
    // DBG_MAQAO
    if(node) 
      return node->get_file_info ()->get_line();
    else
      return -1;
   }

// return starting column. if < 0, use default
int
UnparseFormatHelp::getCol( SgLocatedNode* node, SgUnparse_Info& info, FormatOpt opt) 
   {
    // DBG_MAQAO
    if(node) 
      return node->get_file_info ()->get_col();
    else
     return -1;
   }

int
UnparseFormatHelp::tabIndent()
   {
     return TABINDENT;
   }

int
UnparseFormatHelp::maxLineLength()
   {
     return MAXINDENT;
   }

