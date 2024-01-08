# C++ - Module 08: Templated Containers, Iterators, Algorithms

  <img src="cpp_logo.png" alt="C++ Logo" width="100" height="100">

## Table of Contents

1. [Introduction](#introduction)
2. [Module-specific Rules](#module-specific-rules)
3. [Exercise 00: Easy Find](#exercise-00-easy-find)
4. [Exercise 01: Span](#exercise-01-span)
5. [Exercise 02: Mutated Abomination](#exercise-02-mutated-abomination)

## Introduction

Module 08 focuses on templated containers, iterators, and algorithms in C++. This module will cover the implementation of custom containers and how to make them iterable, as well as using standard algorithms to manipulate data.

Please follow the provided guidelines and restrictions as they are crucial for successfully completing this module.

## Module-specific Rules

This module emphasizes the use of Standard Template Library (STL) containers and algorithms. You are encouraged to use containers like vector, list, map, etc., along with the algorithms defined in `<algorithm>`.

## Exercise 00: Easy Find

### Introduction

This exercise introduces a function template `easyfind` that accepts a type `T`. It takes two parameters, where the first one is of type `T` and the second one is an integer. The function aims to find the first occurrence of the second parameter in the first parameter.

### Relevance

This exercise provides practical experience in writing function templates and working with containers of integers.

### Key Concepts

- Function Templates
- Container Manipulation
- Exception Handling

## Exercise 01: Span

### Introduction

In this exercise, you will develop a class template called `Span` that can store a maximum of `N` integers. The class will have a member function `addNumber()` to add a single number to the `Span`, and member functions `shortestSpan()` and `longestSpan()` to find the shortest and longest spans between the stored numbers.

### Relevance

Creating a versatile data structure like `Span` involves understanding class templates and managing data effectively.

### Key Concepts

- Class Templates
- Data Management
- Exception Handling

## Exercise 02: Mutated Abomination

### Introduction

This exercise challenges you to create a class called `MutantStack` that inherits from `std::stack` and adds the ability to iterate over it. This involves making a standard container iterable by implementing iterators.

### Relevance

This exercise emphasizes inheritance and iterator implementation, key concepts in C++ programming.

### Key Concepts

- Inheritance
- Iterators
- Container Manipulation
