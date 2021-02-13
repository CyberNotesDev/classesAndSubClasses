/*
    *Class access modifiers To Know*
        public: Members are accessible from any function.
        protected: Specifies access to class members in the member-list up to the next access specifier ( public or private ) or the end of the class.
        private: Members are accessible only from member functions and friends of the class.
*/

class Vehicle {
    public:
    void vehicleSound() {
        std::cout << "VRRMMMM\n";
    }
};

class Truck : public Vehicle { // In a subclass, make sure to put keywords before adding parent!
    public:
    void truckSound() {
        std::cout << "BRRRR\n";
    }
};

class Car : public Vehicle {
    public:
    void carSound() {
        std::cout << "Beep\n";
    }
};