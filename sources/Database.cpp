//
// Created by uchauhan on 11-02-2025.
//


#include "Database.h"
#include <stdexcept>

void Database::createTable(const std::string& name, const std::vector<std::string>& columns) {
    if (tables.find(name) != tables.end()) {
        throw std::runtime_error("Table already exists");
    }
    tables.emplace(name, Table(name, columns));
}

void Database::insertInto(const std::string& table, const std::vector<std::string>& values) {
    if (tables.find(table) == tables.end()) {
        throw std::runtime_error("Table not found");
    }
    tables.at(table).insert(values);
}

std::vector<std::vector<std::string>> Database::selectFrom(
    const std::string& table,
    const std::string& whereClause
) {
    if (tables.find(table) == tables.end()) {
        throw std::runtime_error("Table not found");
    }
    return tables.at(table).select(whereClause);
}