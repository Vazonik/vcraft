#ifndef VCRAFT_TEST_H
#define VCRAFT_TEST_H

class Test {
private:
    int value{};
public:
    Test();
    Test(int val);
    int GetVal() const;
};

#endif //VCRAFT_TEST_H
