#include <iostream>

class Car {
public:
    std::string company , model;
    int year;
    Car() {
        std::cout << "Car constructor" << std::endl;
    }
    ~Car() {
        std::cout << "Car destructor" << std::endl;
    }
    void setCompany(std::string company) {
        this->company = company;
    }
    void setModel(std::string model) {
        this->model = model;
    }
    void setYear(int year) {
        this->year = year;
    }
    void print() {
        std::cout << "Company: " << company << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
    std::string getCompany() {
        return company;
    }
    std::string getModel() {
        return model;
    }
    int getYear() {
        return year;
    }
};


int main() {
    Car car;
    car.setCompany("Toyota");
    car.setModel("Corolla");
    car.setYear(2015);
    car.print();
    return 0;
}
