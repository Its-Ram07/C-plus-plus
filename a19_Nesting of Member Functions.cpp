#include <iostream>
using namespace sdt

    
    
class binary    //  If one member function is called inside the other member function of the same class it is called nesting of a member function
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
