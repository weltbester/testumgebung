/*
 * Copyright: Georg Pohl, 70174 Stuttgart, et al.
 * Filename: CheckoutLineClass.cpp
 */
 #include <iostream>
 #include <iomanip>
 #include "queue.h"
 #include "random.h"
 using namespace std;

 /* CONSTANTS */
 const double ARRIVAL_PROBABILITY = 0.05;
 const int MIN_SERVICE_TIME = 5;
 const int MAX_SERVICE_TIME = 15;
 const int SIMULATION_TIME = 2000;

/* Instance Variables */

/* Prototypes */

/*
 * Class: CheckoutLineSimulation
 * -----------------------------
 * This class encapsulates the code and data for the simulation.
 */

 class CheckoutLineSimulation {
 public:
    void runSimulation(int &nServed, int &totalWait, int &totalLength) {
        Queue<int> queue;
    }
    void printReport() {

    }

 private:
    int nServed;        /* Number of customers served */
    int totalWait;      /* Sum of all customer waiting times */
    int totalLength;    /* Sum of the queue length at each time step */
 }

 /* Main Program */

 int main() {
     CheckoutLineSimulation simulation;
     simulation.runSimulation();
     simulation.printReport();
     return 0;
 }

/* Functions */