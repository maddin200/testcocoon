/****************************************************************************
 **
 ** Copyright (C) see AUTHORS included in the packaging of this file.
 **                ---   All rights reserved ---
 **
 ** This file may be distributed and/or modified under the terms of the
 ** GNU General Public License version 2 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.TXT included in the
 ** packaging of this file.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ** Contact info@testcocoon.org if any conditions of this licensing are
 ** not clear to you.
 **
 ****************************************************************************/

#ifndef PATCH_CPP_SEMI_FOR_START2_H
#define PATCH_CPP_SEMI_FOR_START2_H
#include "coveragescannerpdef.h"
#include "patch_cpp_start.h"

class PatchCppSemiForStart2 : public PatchCppStart
{
public:
    PatchCppSemiForStart2(const char *_f,long _line_rel,long _line,long _col,long _depth,const instrumentation_option_t &_option,long _offset,const char *_table_name, const std::string &condition_text) : PatchCppStart(_f,_line_rel,_line,_col,_depth,_option,_offset,_table_name) 
    {
      _condition_text = condition_text;
    }
    virtual std::string code(const std::string &table_name) const;
    virtual std::string name() const { return "PatchCppSemiForStart2"; }

private:
    std::string _condition_text;

};
#endif
