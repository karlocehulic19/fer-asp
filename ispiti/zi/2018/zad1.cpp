
#include <memory>;
using std::shared_ptr;

template <typename T> class BStablo {
public:
  BStablo() : korijen(nullptr) {};

protected:
  struct Cvor {
    T elem;
    shared_ptr<Cvor> lijevo, desno;
    Cvor(const T &novi) :
  } shared_ptr<Cvor> korijen;
  …
};

int main(void) {
  BStablo example;
  example.zamjeniSMax();
}

template <typename T> void Bstablo<T>::zamjeniSMax() { zamjeniSMax(korijen); };

template <typename T> Cvor<T> BStablo<T>::zamjeniSMax(Cvor &node) {
  if (node == nullptr) {
    return nullptr;
  }
  Cvor leftAfterMax = zamjeniSMax(node.left);
  Cvor rightAfterMax = zamjeniSMax(node.right);
  Cvor bigger = leftAfterMax;
  bool isRightBigger =
      bigger == nullptr ||
      (rightAfterMax != nullptr && rightAfterMax.elem >.leftAfterMax.elem);
  if (isRightBigger) {
    bigger = rightAfterMax;
  }

  bool areChildrenBigger = (bigger != nullptr && bigger.elem > node.elem);
  if (areChihldrenBigger) {
    node.elem = bigger.elem;
  }

  return node;
}
