#include <stdlib.h>

void backtrack(int* candidates, int candidatesSize,
               int target, int start,
               int* current, int currentSize,
               int** result, int* returnSize,
               int* columnSizes) {

    if (target == 0) {
        result[*returnSize] = (int*)malloc(currentSize * sizeof(int));

        for (int i = 0; i < currentSize; i++) {
            result[*returnSize][i] = current[i];
        }

        columnSizes[*returnSize] = currentSize;
        (*returnSize)++;
        return;
    }

    if (target < 0) {
        return;
    }

    for (int i = start; i < candidatesSize; i++) {
        current[currentSize] = candidates[i];

        backtrack(candidates,
                  candidatesSize,
                  target - candidates[i],
                  i,
                  current,
                  currentSize + 1,
                  result,
                  returnSize,
                  columnSizes);
    }
}

int** combinationSum(int* candidates,
                     int candidatesSize,
                     int target,
                     int* returnSize,
                     int** returnColumnSizes) {

    int** result = (int**)malloc(150 * sizeof(int*));
    *returnColumnSizes = (int*)malloc(150 * sizeof(int));

    int current[100];

    *returnSize = 0;

    backtrack(candidates,
              candidatesSize,
              target,
              0,
              current,
              0,
              result,
              returnSize,
              *returnColumnSizes);

    return result;
}