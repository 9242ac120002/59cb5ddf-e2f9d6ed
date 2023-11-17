/*
  Copyright (c) 2015, 2023, Oracle and/or its affiliates.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License, version 2.0,
  as published by the Free Software Foundation.

  This program is also distributed with certain software (including
  but not limited to OpenSSL) that is licensed under separate terms,
  as designated in a particular file or component or in included license
  documentation.  The authors of MySQL hereby grant you an additional
  permission to link the program and your derivative works with the
  separately licensed software that they have included with MySQL.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License, version 2.0, for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#include "client/dump/abstract_plain_sql_object.h"

using namespace Mysql::Tools::Dump;

std::string Abstract_plain_sql_object::get_sql_formatted_definition() const {
  return m_sql_formatted_definition;
}

void Abstract_plain_sql_object::set_sql_formatted_definition(
    std::string new_def) {
  m_sql_formatted_definition = new_def;
}

Abstract_plain_sql_object::Abstract_plain_sql_object(
    uint64 id, const std::string &name, const std::string &schema,
    const std::string &sql_formatted_definition)
    : Abstract_data_object(id, name, schema),
      m_sql_formatted_definition(sql_formatted_definition) {}