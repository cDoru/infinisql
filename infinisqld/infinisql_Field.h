/*
 * Copyright (c) 2013 Mark Travis <mtravis15432+src@gmail.com>
 * All rights reserved. No warranty, explicit or implicit, provided.
 *
 * This file is part of InfiniSQL (tm). It is available either under the
 * GNU Affero Public License or under a commercial license. Contact the
 * copyright holder for information about a commercial license if terms
 * of the GNU Affero Public License do not suit you.
 *
 * This copy of InfiniSQL is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * InfiniSQL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero Public License for more details.
 *
 * You should have received a copy of the GNU Affero Public License
 * along with InfiniSQL. It should be in the top level of the source
 * directory in a file entitled "COPYING".
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FIELD_HPP
#define FIELD_HPP

#include "infinisql_gch.h"
#include "infinisql_Index.h"

class Field
{
public:
  Field(fieldtype_e, int64_t, indextype_e, string);
  virtual ~Field();

  friend class Transaction;
  friend class ApiInterface;
  friend class Table;
  friend class SubTransaction;

  //private:
  fieldtype_e type;
  size_t length;
  indextype_e indextype;
  class Index index;
  string name;
};

#endif  /* FIELD_HPP */

