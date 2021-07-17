#include <iostream>

template <typename... Policies>
class PolicyAndVariadic : public Policies...
{
};

class PolicyOne
{
public:
    void executePolicyOne()
    {
        std::cout << "execute PolicyOne" << std::endl;
    }
};

class PolicyTwo
{
public:
    void executePolicyTwo()
    {
        std::cout << "execute PolicyTwo" << std::endl;
    }
};

typedef PolicyAndVariadic<PolicyOne, PolicyTwo> PolicyOneAndPolicyTwo;

int main(void)
{
    PolicyOneAndPolicyTwo linstance;

    linstance.executePolicyOne();

    linstance.executePolicyTwo();
}