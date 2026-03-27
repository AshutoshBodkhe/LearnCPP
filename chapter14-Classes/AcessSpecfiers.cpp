#include <iostream>

class baseClass{
    
    public:

        void Publicdisplay(){
            std::cout << "Base class display function" << std::endl;
        };
    
    protected:

        void protectedDisplay(){
            std::cout << "Base class protected display function" << std::endl;
        };

    private:

        void privateDisplay(){
            std::cout << "Base class private display function" << std::endl;
        };
        
};



class publicDerrived : public baseClass{
    
    public:

        void display(){
            Publicdisplay(); // Accessible
            protectedDisplay(); // Accessible
            // privateDisplay(); // Not accessible, will cause a compilation error
        }
};


class protectedDerrived : protected baseClass{
    
    public:

        void display(){
            Publicdisplay(); // Accessible
            protectedDisplay(); // Accessible
            // privateDisplay(); // Not accessible, will cause a compilation error
        }
};

class privateDerrived : private baseClass{
    
    public:

        void display(){
            Publicdisplay(); // Accessible
            protectedDisplay(); // Accessible
            // privateDisplay(); // Not accessible, will cause a compilation error
        }
};


class privateDerrived2 : private privateDerrived{
    
    public:

        void display(){
            // Publicdisplay(); // Not Accessible
            // protectedDisplay(); //NOt  Accessible
            // privateDisplay(); // Not accessible, will cause a compilation error
        }
};

class protectedDerrived2 : protected protectedDerrived{
    
    public:

        void display(){
            Publicdisplay();
            protectedDisplay();
         // privateDisplay(); // Not accessible, will cause a compilation error
        }
};

class publicDerrived2 : public publicDerrived{
    
    public:

        void display(){
            Publicdisplay();
            protectedDisplay();
         // privateDisplay(); // Not accessible, will cause a compilation error
        }
};

int main(){
    protectedDerrived2 obj;
    obj.display(); // This will call the display function of protectedDerrived2, which can access the public and protected members of baseClass through protected inheritance.
    // obj.Publicdisplay(); // This will call the Publicdisplay function of baseClass, which is not accessible through protected inheritance.

    publicDerrived2 obj2;
    obj2.Publicdisplay();
    return 0;


}