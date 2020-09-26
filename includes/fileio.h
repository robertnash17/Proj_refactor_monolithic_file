#ifndef FILEIO_FILEIO_H_
#define FILEIO_FILEIO_H_
#include <string>
#include <vector>

int loadData(const std::string filename, vector<process> &myProcesses);
int saveData(const std::string filename, vector<process> &myProcesses);

#endif /* FILEIO_FILEIO_H_ */
