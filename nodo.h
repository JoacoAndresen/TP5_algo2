#ifndef NODO_H_
#define NODO_H_
#include "aeropuerto.h"

template <class T>
class Node {
private:
    Node<T>* left;
    Node<T>* right;
    T data;
    Aeropuerto* p;
    
public:
    Node(T data, Aeropuerto* pa);
    T getData() const;
    void setData(T data);
    Node<T>*& getLeft();
    void setLeft(Node<T>* left);
    Node<T>*& getRight();
    void setRight(Node<T>* right);
    virtual ~Node();
    Aeropuerto*& getAep();
};

template<class T>
Node<T>::Node(T data, Aeropuerto* pa){
    right = nullptr;
    left = nullptr;
    p = pa;
    this->data = data;
}

template <class T>
T Node<T>::getData() const {
    return data;
}

template <class T>
void Node<T>::setData(T data) {
    this->data = data;
}

template <class T>
Node<T>*& Node<T>::getLeft() {
    return left;
}

template <class T>
void Node<T>::setLeft(Node<T>* left) {
    this->left = left;
}

template <class T>
Node<T>*& Node<T>::getRight() {
    return right;
}

template <class T>
void Node<T>::setRight(Node<T>* right) {
    this->right = right;
}

template <class T>
Aeropuerto*& Node<T>::getAep(){
    return p;
}

template <class T>
Node<T>::~Node(){
}

#endif

