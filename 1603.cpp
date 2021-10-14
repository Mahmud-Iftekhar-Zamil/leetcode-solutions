class ParkingSystem {
    int BIG, MEDIUM, SMALL;
public:
    ParkingSystem(int big, int medium, int small) {
        BIG = big; MEDIUM = medium; SMALL = small;
    }
    
    bool addCar(int carType) {
        if(carType==1 && BIG>0) {
            BIG--;
            return true;
        } else if(carType==2 && MEDIUM>0) {
            MEDIUM--;
            return true;
        } else if(carType==3 && SMALL>0) {
            SMALL--;
            return true;
        }
       return false;     
    }
};
