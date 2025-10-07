#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    // Delete copy constructor and copy assignment operator
    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;

    void append(int value) {
        if (head == nullptr) {
            head = new Node(value);
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }

    void display() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;}
    // Move constructor
    LinkedList(LinkedList&& other) noexcept : head(other.head) {
        other.head = nullptr;
    }

    // Move assignment operator
    LinkedList& operator=(LinkedList&& other) noexcept {
        if (this != &other) {
            // Clean up current list
            Node* current = head;
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
            // Steal other's resources
            head = other.head;
            other.head = nullptr;
        }
        return *this;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);

    std::cout << "Linked List: ";
    list.display();

    return 0;
}