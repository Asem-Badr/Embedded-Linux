

typedef struct
{
    int big_cap, medium_cap, small_cap, big_count, medium_count, small_count;
} ParkingSystem;

ParkingSystem *parkingSystemCreate(int big, int medium, int small)
{
    ParkingSystem *system = malloc(sizeof(ParkingSystem));
    system->big_cap = big;
    system->medium_cap = medium;
    system->small_cap = small;
    system->big_count = 0;
    system->medium_count = 0;
    system->small_count = 0;
    return system;
}

bool parkingSystemAddCar(ParkingSystem *obj, int carType)
{
    if (carType == 1)
    {
        if (obj->big_count < obj->big_cap)
        {
            obj->big_count++;
            return true;
        }
    }
    else if (carType == 2)
    {
        if (obj->medium_count < obj->medium_cap)
        {
            obj->medium_count++;
            return true;
        }
    }
    else if (carType == 3)
    {
        if (obj->small_count < obj->small_cap)
        {
            obj->small_count++;
            return true;
        }
    }
    return false;
}

void parkingSystemFree(ParkingSystem *obj)
{
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);

 * parkingSystemFree(obj);
*/