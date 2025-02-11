//
// Created by uchauhan on 11-02-2025.
//


#include <iostream>
#include "Database.h"

int main() {
    Database db;

    // Create table
    db.createTable("users", {"id", "name", "age"});

    // Insert data
    db.insertInto("users", {"1", "Alice", "30"});
    db.insertInto("users", {"2", "Bob", "25"});

    // Query data
    auto results = db.selectFrom("users", "age > 25");

    // Print results
    std::cout << "Users over 25:\n";
    for (const auto& row : results) {
        std::cout << row[0] << " | " << row[1] << " | " << row[2] << "\n";
    }

    return 0;
}