# Mini In-Memory Database

A simple C++ in-memory database supporting:
- Table creation
- Row insertion
- Basic SELECT queries with WHERE clauses

## Features
- *Data Structures*: Uses unordered_map for fast table lookups and vector for rows
- *Error Handling*: Validates table schemas and query syntax
- *Query Parsing*: Supports basic comparisons (>, ==)

## Build & Run
```bash
make && ./mini_db
