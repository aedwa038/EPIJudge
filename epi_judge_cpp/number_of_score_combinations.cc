#include <vector>

using std::vector;

int NumCombinationsForFinalScore(int final_score,
                                 const vector<int>& individual_play_scores) {
  // Implement this placeholder.
  return 0;
}

#include "test_framework/test_utils_generic_main.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> param_names{"final_score", "individual_play_scores"};
  generic_test_main(argc, argv, param_names, "number_of_score_combinations.tsv",
                    &NumCombinationsForFinalScore);
  return 0;
}
