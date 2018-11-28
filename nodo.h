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
    // Contructor
    // PRE: Datos validos
    // POST: Crea el nodo con los datos recibidos
    Node(T data, Aeropuerto* pa);
    
    // PRE: -
    // POST: Devuelve data (el codigo ascii)
    T getData() const;
    
    // PRE: Datos validos
    // POST: Modifica data
    void setData(T data);
    
    // PRE: -
    // POST: Devuelve el hijo izquierdo si lo encuentra
    Node<T>*& getLeft();
    
    // PRE: Datos validos
    // POST: Modifica el hijo izquierdo
    void setLeft(Node<T>* left);
    
    // PRE: -
    // POST: Devuelve el hijo derecho si lo encuentra
    Node<T>*& getRight();
    
    // PRE: Datos validos
    // POST: Modifica el hijo derecho
    void setRight(Node<T>* right);
    
    // Destructor
    virtual ~Node();
    
    // PRE: -
    // POST: Devuelve el puntero al objeto
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

