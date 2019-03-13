#include "equation.h"
int main() {
    FindRoot obj(1,1,-12);
    obj.Find();
    obj.Display();
    return 0;
}