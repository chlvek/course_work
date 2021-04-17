#ifndef COURSE_WORK_MATRIX_H
#define COURSE_WORK_MATRIX_H

#include <vector>

class Matrix
{
public:
    /*
    Get element at (x, y)
    */
    int Get(int x, int y);

    /*
    Get list of elements around the element at (x, y)
    */
    std::vector<int> GetNeihbours(int x, int y);

    /*
    Get list of all elements at the 'y' line
    */
    std::vector<int> GetLine(int y);

    /*
    Get list of all elements at the 'x' column
    */
    std::vector<int> GetColumn(int x);

    /*
    Get sub Matrix with elements included in the top_left and bottom_right elements

    @note: do we need this method? 
    */
    Matrix GetSubmatrix(int top_left, int bottom_right);

private:
    // possible variants of implementation:
    // deque
    // list
    // 2d array ???
};

#endif //COURSE_WORK_MATRIX_H