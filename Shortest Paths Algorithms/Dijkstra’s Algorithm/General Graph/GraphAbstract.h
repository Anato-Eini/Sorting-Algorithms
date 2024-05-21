#ifndef DATA_STRUCTURES_GRAPHABSTRACT_H
#define DATA_STRUCTURES_GRAPHABSTRACT_H

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <string>

namespace Graph {

    template <typename V, typename E>
    class GraphAbstract;

    template<typename V, typename E>
    std::ostream &operator<<(std::ostream &os, GraphAbstract<V, E> *graph);

    template<typename V, typename E>
    std::ostream &operator<<(std::ostream &os, GraphAbstract<V, E> &graph);

    template<typename V, typename E>
    class GraphAbstract {
        virtual void print(std::ostream &) = 0;

    public:
        virtual std::vector<V> vertices() const = 0;

        virtual std::vector<E> edges() const = 0;

        ///Returns a pair of empty strings if none
        virtual std::pair<V, V> endVertices(const E &edge) = 0;

        virtual std::vector<E> outgoingEdges(const V &vertex) = 0;

        virtual std::vector<E> incomingEdges(const V &vertex) = 0;

        virtual E getEdge(const V &vertex1, const V &vertex2) = 0;

        virtual std::vector<V> opposite(const V &vertex) = 0;

        ///Must be unique
        virtual void addVertex(const V &vertex) = 0;

        ///Must be unique
        virtual void addEdge(const E &edge, const V &vertex1, const V &vertex2) = 0;

        virtual void removeVertex(const V &vertex) = 0;

        virtual void removeEdge(const E &edge) = 0;

        virtual bool containEdge(const E &edge) const = 0;

        virtual bool containVertex(const V &vertex) const = 0;

        virtual size_t numVertices() = 0;

        virtual size_t numEdges() = 0;

        virtual size_t outDegree(const V &vertex) = 0;

        virtual size_t inDegree(const V &vertex) = 0;

        friend std::ostream &operator<< <>(std::ostream &, GraphAbstract<V, E> *graph);

        friend std::ostream &operator<< <>(std::ostream &, GraphAbstract<V, E> &graph);

        virtual ~GraphAbstract() = default;
    };
}

#include "GraphAbstract.cpp"

#endif //DATA_STRUCTURES_GRAPHABSTRACT_H
