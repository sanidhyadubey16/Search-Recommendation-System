## Problem Statement

The aim of this project is to build a **Fast search and recommendation system** using core data structures and algorithms.
Instead of using ready-made libraries or AI tools, this project focuses on implementing the internal logic from scratch to understand how large-scale systems handle search and ranking efficiently.

The system is built incrementally, starting from naive approaches and then optimized using better data structures to improve performance.


# Features
## Search Engine

- Keyword-based search for items

- Efficient search using Inverted Index

- Prefix-based search using Trie

- Ranked search results based on:

    - Keyword frequency
    - Popularity score
    - Recency

- Top-K results using Heap / Priority Queue

## Recommendation System :-

- Personalized recommendations based on user interactions

- Item-to-item similarity using:

  - Jaccard Similarity
  - Cosine Similarity

- Top-N recommendations using Heap

- No machine learning — pure algorithmic approach

## Performance & Optimization :-

- LRU Cache for frequently searched queries

- Pagination support

- Optimized time and space complexity

- Pre-computation for faster recommendations
These optimizations were added after identifying performance bottlenecks during testing with larger datasets.

## System Design

- Modular and extensible architecture

- Clear separation of concerns

- Designed to scale for large datasets

- Well-documented trade-offs and optimizations

## Tech Stack
**Core**

- Language: C++

- Data Structures: HashMap, Trie, Heap, Set, Vector, Linked List

- Algorithms: Indexing, Similarity Metrics, Ranking, Caching

**Storage** 

- In-memory storage (initial)

- Extensible to databases (PostgreSQL / MongoDB)

**Tools**

- Git & GitHub

- Markdown (Documentation)
