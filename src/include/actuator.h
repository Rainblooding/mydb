#ifndef ACTUATOR_H
#define ACTUATOR_H
#include "parser.h"
#include "table.h"

typedef enum { EXECUTE_SUCCESS, EXECUTE_TABLE_FULL } ExecuteResult;

void print_row(Row* row);
ExecuteResult execute_statement(Statement* statement, Table* table);
ExecuteResult execute_insert(Statement* statement, Table* table);
ExecuteResult execute_select(Statement* statement, Table* table);
#endif