#include <iostream>
using namespace std;
namespace vehicle{
    enum VehicleSpeed{
        XSLOW = 5,
        SLOW = 10,
        MEDIUM = 15,
        FAST = 20,
        XFAST = 25
    }

    enum VehicleClass{
        LORY,
        TRUCK,
        CAR,
        BIKE
    }


    class MovingVehicle{
        public:
            enum VehicleSpeed vspeed;
            enum VehicleClass vclass;
            double heading_dir;

            MovingVehicle(enum VehicleSpeed vspeed, enum VehicleClass vclass, heading_dir){
                this->vspeed = vspeed;
                this->vclass = vclass;
                this->heading_dir = heading_dir;
            }

            void displayDetails(){
                cout << this->vspeed << endl;
                cout << this->vclass << endl;
                cout << this->heading_dir << endl;
                cout << "\n";
            }

            void turn(double new_heading_dir){
                this->heading_dir = new_heading_dir;
            }
    }
}
int main(){
    vehicle::VehicleSpeed vspeed = XFAST;
    vehicle::VehicleClass vclass = TRUCK;
    vehicle::MovingVehicle moving_vehicle(vspeed, vclass, 50.8);

    cout << "Before:"
    moving_vehicle.displayDetails();
    moving_vehicle.turn(80.344);
    cout << "After:"
    moving_vehicle.displayDetails();

}
