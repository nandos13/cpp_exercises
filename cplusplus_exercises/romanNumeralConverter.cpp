#include "romanNumeralConverter.h"
#include "utils.h"

namespace jakeperry {

    /// <summary>
    /// Convert a Roman Numeral number to an integer value.
    /// </summary>
    /// <param name="s">A string representation of a Roman Numeral.</param>
    /// <returns>
    /// Integer representation of the input Roman Numeral string.
    /// </returns>
    int romanNumeralConverter::romanToInteger(string s) {
        const char numeral_symbols[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
        const int numeral_values[] = { 1, 5, 10, 50, 100, 500, 1000 };

        int result = 0;

        // Iterate symbols in reverse order
        for (int i = s.size() - 1; i >= 0; --i) {
            int symValue = numeral_values[utils::find(numeral_symbols, s[i])];
            int val = symValue;

            // Check the symbols preceding the current for symbols that
            // decrease the value of the current symbol
            // (eg. the 'I' in 'IX' decreases the value of 'X' (10) by 1 (to 9)).
            for (int j = i - 1; j >= 0; i = --j) {
                int symValue2 = numeral_values[utils::find(numeral_symbols, s[j])];
                if (symValue2 < symValue) {
                    val -= symValue2;
                }
                else {
                    // Increment such that i will equal j after the
                    // first loop's decrement statement is invoked.
                    ++i;
                    break;
                }
            }

            result += val;
        }

        return result;
    }
}
