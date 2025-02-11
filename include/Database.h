//
// Created by uchauhan on 11-02-2025.
//

#ifndef DATABASE_H
#define DATABASE_H



#include "Table.h"
#include <unordered_map>

class Database {
private:
    std::unordered_map<std::string, Table> tables;

public:
    void createTable(const std::string& name, const std::vector<std::string>& columns);
    void insertInto(const std::string& table, const std::vector<std::string>& values);
    std::vector<std::vector<std::string>> selectFrom(
        const std::string& table,
        const std::string& whereClause = ""
    );
};


#endif //DATABASE_H
