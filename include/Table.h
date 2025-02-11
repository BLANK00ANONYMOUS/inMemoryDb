//
// Created by uchauhan on 11-02-2025.
//

#ifndef TABLE_H
#define TABLE_H


#include <vector>
#include <string>
#include <unordered_map>

class Table {
private:
    std::string name;
    std::vector<std::string> columns;
    std::vector<std::vector<std::string>> rows;
    std::unordered_map<std::string, int> columnIndex;

public:
    Table(const std::string& name, const std::vector<std::string>& cols);
    void insert(const std::vector<std::string>& values);
    std::vector<std::vector<std::string>> select(const std::string& whereClause = "") const;
    const std::vector<std::string>& getColumns() const;
};



#endif //TABLE_H
