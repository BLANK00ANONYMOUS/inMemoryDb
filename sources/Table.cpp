//
// Created by uchauhan on 11-02-2025.
//


#include "Table.h"
#include <sstream>
#include <bits/stdc++.h>

Table::Table(const std::string& name, const std::vector<std::string>& cols)
    : name(name), columns(cols) {
    for (int i = 0; i < cols.size(); i++) {
        columnIndex[cols[i]] = i;
    }
}

void Table::insert(const std::vector<std::string>& values) {
    if (values.size() != columns.size()) {
        throw std::runtime_error("Column count mismatch");
    }
    rows.push_back(values);
}

std::vector<std::vector<std::string>> Table::select(const std::string& whereClause) const {
    // Simplified WHERE clause parsing (e.g., "age > 25")
    std::vector<std::vector<std::string>> result;
    for (const auto& row : rows) {
        if (whereClause.empty()) {
            result.push_back(row);
            continue;
        }

        // Basic condition parsing (supports "col op value")
        std::istringstream iss(whereClause);
        std::string col, op, value;
        iss >> col >> op >> value;

        int idx = columnIndex.at(col);
        std::string cellValue = row[idx];

        // Simple comparison logic
        if (op == ">" && std::stoi(cellValue) > std::stoi(value)) {
            result.push_back(row);
        } else if (op == "==" && cellValue == value) {
            result.push_back(row);
        }
    }
    return result;
}

const std::vector<std::string>& Table::getColumns() const {
    return columns;
}