class ParkingSystem {
private:
    int big ,medium,small;
    int big_taken=0, medium_taken=0,small_taken=0;
public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(big_taken < big){
                big_taken++;
                return true;
            }
        }else if(carType == 2){
            if(medium_taken<medium){
                medium_taken++;
                return true;
            }
        }else if(carType == 3){
            if(small_taken < small ){
                small_taken++;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */