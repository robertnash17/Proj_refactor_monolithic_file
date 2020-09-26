#ifndef UTILS_UTILS_H_
#define UTILS_UTILS_H_
#include <vector>
#include "constants.h"

void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
process getNext(vector<process> &myProcesses);
int getSize(vector<process> &myProcesses);
int handleMissingData(vector<process> &myProcesses);


#endif /* UTILS_UTILS_H_ */
