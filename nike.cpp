#include <iostream>
#include <string>

class Plants
{
public:
    Plants() 
    {
       
        name_ = "Vasilek";
        razmer_ = "small";
        high_ = 10;
    }

    ~Plants()
    {
        
    }
    Plants(std::string name, std::string razmer, int high)
    {
        name_ = name;
        razmer_ = razmer;
        high_ = high;
    }

    void Print() 
    {
        std::cout << "Name: " << name_ << ", Razmer: " << razmer_ << ", High: " << high_ ;
    }

    void SetName(std::string name)
    {
        name_ = name;
    }

    void SetRazmer(std::string razmer) 
    {
        razmer_ = razmer;
    }

    void SetHigh(int high)
    {
        high_ = high;
    }

    std::string GetName()
    {
        return name_;
    }

    std::string GetRazmer()
    {
        return razmer_;
    }

    int GetHigh()
    {
        return high_;
    }

private:
    std::string name_;
    std::string razmer_;
    int high_;
};

class Bush : public Plants
{
public:
    Bush() = default;
    Bush(std::string name_, std::string razmer_, int high_):Plants(name_, "small", high_) {}
  

    ~Bush()
    {
        std::cout << "Bush destroyed\n";
    }
};

class Tree : public Plants
{
public:
    Tree() 
    {
        std::cout << "Tree constructorn\n";
    }

    ~Tree()
    {
        std::cout << "Tree destroyedn\n";
    }
};

int main()
{
    Bush bush;
    Tree tree;

    bush.Print(); 
    tree.Print(); 

    return 0;
}
