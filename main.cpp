#include <iostream>

#include "src/node.hpp"
#include "src/link.hpp"

using namespace std;
int main() {
    Link gold("Gold");
    Node<Link> node_one(&gold);

    Link silver("Silver");
    Node<Link> node_two(&silver, &node_one);

    Link bronze("Bronze");
    Node<Link> node_three(&bronze, &node_two);

    Node<Link>* retrieved_node_two = node_one.next();
    Node<Link>* retrieved_node_three = node_two.next();

    std::cout << retrieved_node_two->get_data()->get_material() << "\n";
    std::cout << retrieved_node_three->get_data()->get_material() << "\n";

    cout << "\n=== Testing Node<int> ===" << endl;

    int a = 10;
    Node<int> int_node_one(&a);

    int b = 20;
    Node<int> int_node_two(&b, &int_node_one);

    int c = 30;
    Node<int> int_node_three(&c, &int_node_two);

    Node<int>* p = &int_node_one;
    while (p != nullptr) {
        cout << *p->get_data() << endl;   // dereference int*
        p = p->next();
    }

    return 0;
}



