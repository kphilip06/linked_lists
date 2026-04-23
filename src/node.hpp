#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
private:
  T* data;
  Node<T>* child;

public:
  Node(T* data) {
    this->data = data;
    this->child = nullptr;
  }

  Node(T* data, Node<T>* parent) {
    this->data = data;
    this->child = nullptr;
    parent->child = this;
  }

  Node<T>* next() {
    return child;
  }

  T* get_data() {
    return data;
  }
};

#endif
