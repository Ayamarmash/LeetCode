class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int gasSum = 0, costSum = 0;
        for(int i=0; i < gas.size(); i++){
            gasSum += gas[i];
            costSum += cost[i];
        }
        if(gasSum < costSum) return -1;
        //otherwise we have a valid route

        int gasInCar = 0, startIndex = 0;

        for(int i = 0; i < gas.size(); i++)//go to every gas station
        {
            gasInCar += gas[i];// add the gas that we have got from that station
            gasInCar -= cost[i];// remove the gas that was spent to go to that station
            if(gasInCar < 0)// if there is not enough gas, start over from the next one, with no gas in the car
            {
                startIndex = i + 1;
                gasInCar = 0;
            }
        }
        return startIndex;     
    }
};
