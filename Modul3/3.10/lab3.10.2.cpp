#include <iostream>
#include <cstdlib>
#include <ctime>

struct Collection {
    int elno;
    int *elements;
};
void AddToCollection(Collection &col, int element) {
    col.elno++;
    int *newarray = new int[col.elno];
    for(int i = 0; i < col.elno; i++)
        newarray[i] = (i < col.elno - 1) ? col.elements[i] : element;
    delete [] col.elements;
    col.elements = newarray;
}
void PrintCollection(Collection col) {
    std::cout << "[ ";
    for(int i = 0; i < col.elno; i++)
        std::cout << col.elements[i] << " ";
    std::cout << "]" << std::endl;
}
int main(void) {
    Collection collection = { 0, NULL };
    int elems;
    std::cout << "How many elements? ";
    std::cin >> elems;
    srand(time(NULL));
    for(int i = 0; i < elems; i++)
        AddToCollection(collection, rand() % 100 + 1);
    PrintCollection(collection);
    delete[] collection.elements;
    return 0;
}