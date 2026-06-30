#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[1] <= 2590.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1525.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1719.0) {
                                        if (x[1] <= 1683.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1734.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2677.0) {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #2
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1800.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[0] <= 1787.5) {
                            if (x[1] <= 2229.5) {
                                if (x[1] <= 1989.5) {
                                    if (x[1] <= 1633.0) {
                                        if (x[0] <= 739.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1655.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 569.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #4
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #5
                        if (x[1] <= 2633.5) {
                            if (x[1] <= 2550.5) {
                                if (x[1] <= 1325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1719.0) {
                                            if (x[1] <= 1683.0) {
                                                if (x[1] <= 1611.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1642.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1832.5) {
                                                if (x[0] <= 1642.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1800.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #6
                        if (x[1] <= 1260.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2550.5) {
                                    if (x[1] <= 2073.0) {
                                        if (x[1] <= 1793.5) {
                                            if (x[1] <= 1712.0) {
                                                if (x[0] <= 1642.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1656.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1800.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2380.0) {
                                            if (x[1] <= 2304.5) {
                                                if (x[0] <= 1656.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1396.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1591.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[0] <= 1787.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[0] <= 1787.5) {
                            if (x[1] <= 2633.0) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #9
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1800.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #10
                        if (x[1] <= 1325.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1866.5) {
                                    if (x[1] <= 1847.5) {
                                        if (x[1] <= 1719.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1668.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2557.5) {
                                        if (x[1] <= 1873.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1748.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1628.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 2550.5) {
                                    if (x[1] <= 2079.0) {
                                        if (x[0] <= 1761.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1656.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2375.5) {
                                    if (x[0] <= 1787.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1591.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2683.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #13
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2550.5) {
                                if (x[1] <= 1628.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1719.0) {
                                        if (x[1] <= 1649.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1777.0) {
                                            if (x[1] <= 1731.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 1743.5) {
                                                    if (x[0] <= 1656.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2073.0) {
                                                if (x[1] <= 2070.0) {
                                                    if (x[1] <= 1838.0) {
                                                        if (x[0] <= 1668.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1876.0) {
                                                            if (x[0] <= 1642.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 1800.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1656.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #14
                        if (x[0] <= 1800.0) {
                            if (x[1] <= 2115.5) {
                                if (x[1] <= 1975.5) {
                                    if (x[0] <= 569.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2067.5) {
                                        if (x[0] <= 557.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 583.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2603.0) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[1] <= 2633.0) {
                            if (x[1] <= 2073.0) {
                                if (x[1] <= 1325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1981.5) {
                                        if (x[1] <= 1971.5) {
                                            if (x[1] <= 1883.0) {
                                                if (x[0] <= 634.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 1628.5) {
                                                        if (x[1] <= 1570.0) {
                                                            if (x[1] <= 1498.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 1668.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1695.5) {
                                                    if (x[1] <= 1885.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 1892.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 569.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1975.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 1978.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2010.0) {
                                            if (x[1] <= 1998.0) {
                                                if (x[0] <= 673.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1800.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2004.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 2007.5) {
                                                        if (x[0] <= 1797.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 530.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 2039.5) {
                                                    if (x[0] <= 1591.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2052.5) {
                                                        if (x[1] <= 2043.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 2044.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 1642.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1656.0) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #16
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #17
                        if (x[1] <= 2633.0) {
                            if (x[1] <= 1638.0) {
                                if (x[1] <= 1325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1079.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1719.0) {
                                    if (x[0] <= 661.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        if (x[0] <= 534.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #18
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #19
                        if (x[0] <= 1787.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #20
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #21
                        if (x[1] <= 2638.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #22
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2677.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #23
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2535.5) {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #24
                        if (x[1] <= 2633.0) {
                            if (x[1] <= 1712.5) {
                                if (x[1] <= 1325.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 661.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1759.0) {
                                    if (x[1] <= 1721.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1656.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1734.0) {
                                        if (x[1] <= 2555.5) {
                                            if (x[1] <= 2479.5) {
                                                if (x[1] <= 2377.5) {
                                                    if (x[0] <= 534.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2400.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 505.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #25
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 1748.5) {
                                if (x[1] <= 1829.0) {
                                    if (x[0] <= 673.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 1859.0) {
                                        if (x[1] <= 1850.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 1853.0) {
                                                if (x[0] <= 690.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2548.5) {
                                            if (x[1] <= 2073.5) {
                                                if (x[0] <= 530.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2379.0) {
                                                    if (x[0] <= 534.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2423.5) {
                                                        if (x[0] <= 505.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 505.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 505.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #26
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #27
                        if (x[1] <= 2531.5) {
                            if (x[1] <= 1652.5) {
                                if (x[1] <= 1558.0) {
                                    if (x[0] <= 1079.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1642.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1719.0) {
                                    if (x[1] <= 1711.5) {
                                        if (x[1] <= 1694.5) {
                                            if (x[1] <= 1674.0) {
                                                if (x[0] <= 739.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1683.0) {
                                                    if (x[0] <= 1564.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1702.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 1705.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1717.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 716.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        if (x[0] <= 534.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2633.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #28
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1800.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #29
                        if (x[1] <= 2530.5) {
                            if (x[1] <= 1325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1632.0) {
                                    if (x[0] <= 739.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1555.5) {
                                            if (x[1] <= 1498.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2073.0) {
                                        if (x[1] <= 1758.0) {
                                            if (x[0] <= 1642.0) {
                                                if (x[1] <= 1663.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 661.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 569.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1800.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2513.0) {
                                            if (x[1] <= 2107.0) {
                                                if (x[0] <= 1537.5) {
                                                    if (x[1] <= 2083.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 634.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1656.0) {
                                                    if (x[1] <= 2113.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 2377.5) {
                                                            if (x[1] <= 2324.0) {
                                                                if (x[0] <= 534.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 2348.5) {
                                                                    if (x[0] <= 505.5) {
                                                                        votes[1] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 505.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #30
                        if (x[0] <= 1787.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #31
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2550.5) {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #32
                        if (x[1] <= 2527.0) {
                            if (x[0] <= 1748.5) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #33
                        if (x[1] <= 2543.5) {
                            if (x[0] <= 1683.0) {
                                if (x[1] <= 1645.5) {
                                    if (x[1] <= 1507.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1520.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 1552.5) {
                                                if (x[1] <= 1538.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 1408.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #34
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1611.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1719.0) {
                                    if (x[0] <= 1642.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #35
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #36
                        if (x[1] <= 2500.5) {
                            if (x[1] <= 1325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 2321.0) {
                                        if (x[1] <= 1638.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1695.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1537.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 505.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1525.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 1787.5) {
                            if (x[1] <= 2705.0) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #38
                        if (x[1] <= 2633.0) {
                            if (x[1] <= 2169.0) {
                                if (x[1] <= 1989.5) {
                                    if (x[0] <= 1681.0) {
                                        if (x[1] <= 1629.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 569.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1761.0) {
                                        if (x[0] <= 559.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2377.5) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 2228.5) {
                                            if (x[0] <= 1591.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1603.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2423.5) {
                                        if (x[0] <= 505.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2405.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 2411.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2550.5) {
                                            if (x[0] <= 1408.5) {
                                                if (x[1] <= 2452.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 2455.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 505.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #39
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1480.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #40
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2375.5) {
                                if (x[1] <= 2228.5) {
                                    if (x[0] <= 1800.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1578.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2456.5) {
                                    if (x[1] <= 2394.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1537.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1525.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #41
                        if (x[1] <= 2638.5) {
                            if (x[0] <= 1787.5) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #42
                        if (x[0] <= 1787.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #43
                        if (x[1] <= 1325.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2550.5) {
                                    if (x[0] <= 1748.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1507.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #45
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2535.5) {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #46
                        if (x[1] <= 2633.0) {
                            if (x[1] <= 1330.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1719.0) {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1748.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #47
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 505.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #48
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1787.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #49
                        if (x[1] <= 2502.0) {
                            if (x[0] <= 1787.5) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #50
                        if (x[1] <= 2633.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #51
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #52
                        if (x[0] <= 1748.5) {
                            if (x[1] <= 2638.5) {
                                if (x[1] <= 2537.0) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #53
                        if (x[1] <= 1325.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[1] <= 2638.5) {
                                if (x[1] <= 2379.0) {
                                    if (x[1] <= 1719.0) {
                                        if (x[1] <= 1663.5) {
                                            if (x[1] <= 1407.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 1473.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 1652.5) {
                                                        if (x[0] <= 739.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 1642.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1696.5) {
                                                if (x[0] <= 661.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 1683.0) {
                                                        if (x[1] <= 1681.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1711.0) {
                                                    if (x[0] <= 739.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 534.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1695.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 2394.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2434.5) {
                                                if (x[1] <= 2407.0) {
                                                    if (x[0] <= 1629.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2420.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 2425.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1537.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #54
                        if (x[1] <= 2633.5) {
                            if (x[1] <= 1581.5) {
                                if (x[1] <= 1260.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1369.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1719.0) {
                                    if (x[0] <= 661.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 2025.5) {
                                            if (x[1] <= 1988.0) {
                                                if (x[0] <= 1707.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1995.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1863.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2160.0) {
                                                if (x[1] <= 2072.5) {
                                                    if (x[1] <= 2070.5) {
                                                        if (x[1] <= 2026.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 1746.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 1642.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2557.5) {
                                                    if (x[0] <= 1656.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #55
                        if (x[0] <= 1761.0) {
                            if (x[1] <= 2484.0) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2646.0) {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #56
                        if (x[1] <= 2583.5) {
                            if (x[1] <= 1721.5) {
                                if (x[0] <= 661.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1628.5) {
                                        if (x[0] <= 1642.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1661.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #57
                        if (x[0] <= 1787.5) {
                            if (x[1] <= 2633.5) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #58
                        if (x[1] <= 1260.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1748.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #59
                        if (x[1] <= 2608.5) {
                            if (x[1] <= 1260.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #60
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 1734.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2677.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #61
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1787.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #62
                        if (x[1] <= 2639.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1761.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #63
                        if (x[1] <= 2590.5) {
                            if (x[1] <= 1467.5) {
                                if (x[1] <= 1330.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1373.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2677.0) {
                                    if (x[1] <= 2633.0) {
                                        if (x[1] <= 2620.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #64
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1734.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #65
                        if (x[1] <= 2502.0) {
                            if (x[1] <= 1325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1748.5) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 505.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1746.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #66
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1668.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #67
                        if (x[1] <= 2590.5) {
                            if (x[0] <= 505.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1507.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1683.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #68
                        if (x[1] <= 2502.0) {
                            if (x[1] <= 1325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1823.0) {
                                    if (x[1] <= 1525.0) {
                                        if (x[0] <= 1079.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1655.5) {
                                            if (x[0] <= 1642.0) {
                                                if (x[1] <= 1629.5) {
                                                    if (x[0] <= 739.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1640.5) {
                                                        if (x[1] <= 1635.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[0] <= 739.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1719.0) {
                                                if (x[1] <= 1675.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 739.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 1687.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1759.0) {
                                                    if (x[0] <= 1656.5) {
                                                        if (x[0] <= 753.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 673.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 1777.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 1789.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 1801.5) {
                                                                    votes[0] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1787.5) {
                                        if (x[0] <= 534.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2545.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 2625.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #69
                        if (x[1] <= 1260.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1868.5) {
                                    if (x[0] <= 1707.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1748.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #70
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2345.0) {
                                    if (x[0] <= 1748.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1591.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #71
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1507.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1748.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #72
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1787.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #73
                        if (x[1] <= 2633.5) {
                            if (x[0] <= 1787.5) {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #74
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1787.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #75
                        if (x[1] <= 2638.5) {
                            if (x[1] <= 1330.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1719.0) {
                                    if (x[0] <= 661.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1480.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1734.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #76
                        if (x[1] <= 2136.5) {
                            if (x[1] <= 1325.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1800.0) {
                                    if (x[1] <= 1798.0) {
                                        if (x[1] <= 1629.5) {
                                            if (x[0] <= 739.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 673.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 557.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2633.0) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 2380.5) {
                                        if (x[0] <= 1656.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1591.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2705.0) {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #77
                        if (x[0] <= 1748.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #78
                        if (x[1] <= 2590.5) {
                            if (x[1] <= 2377.5) {
                                if (x[0] <= 559.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 2322.5) {
                                        if (x[1] <= 1480.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 1719.0) {
                                                if (x[0] <= 1642.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1777.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 1866.0) {
                                                        if (x[1] <= 1847.5) {
                                                            if (x[0] <= 1668.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 1748.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2405.5) {
                                    if (x[1] <= 2398.5) {
                                        if (x[1] <= 2380.5) {
                                            if (x[1] <= 2378.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2404.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2413.0) {
                                        if (x[0] <= 1079.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1537.5) {
                                            if (x[0] <= 505.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2684.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #79
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #80
                        if (x[0] <= 1748.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #81
                        if (x[1] <= 2603.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1611.0) {
                                    if (x[0] <= 1642.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1800.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #82
                        if (x[1] <= 2470.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[0] <= 1787.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2608.5) {
                                if (x[1] <= 2550.5) {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 505.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #83
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1761.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #84
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1446.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1721.5) {
                                    if (x[1] <= 1656.5) {
                                        if (x[1] <= 1644.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 1832.5) {
                                        if (x[1] <= 1758.0) {
                                            if (x[0] <= 1656.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1786.5) {
                                                if (x[0] <= 1668.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1866.0) {
                                            if (x[0] <= 1707.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1939.5) {
                                                if (x[1] <= 1888.5) {
                                                    if (x[0] <= 1681.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1910.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 1591.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2024.5) {
                                                    if (x[1] <= 1970.5) {
                                                        if (x[1] <= 1946.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 1951.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= 1695.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 1800.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 1656.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #85
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1748.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #86
                        if (x[1] <= 2638.5) {
                            if (x[1] <= 2550.5) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 2456.5) {
                                        if (x[0] <= 1787.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2590.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #87
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1628.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 2052.5) {
                                    if (x[0] <= 1761.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1656.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #88
                        if (x[0] <= 1734.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #89
                        if (x[1] <= 2590.5) {
                            if (x[0] <= 505.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2532.0) {
                                    if (x[0] <= 1800.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2550.5) {
                                        if (x[0] <= 1408.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #90
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 1787.5) {
                                if (x[0] <= 534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 2705.0) {
                                if (x[1] <= 2684.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #91
                        if (x[1] <= 2471.5) {
                            if (x[0] <= 1748.5) {
                                if (x[1] <= 2377.5) {
                                    if (x[0] <= 534.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 505.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2550.5) {
                                    if (x[1] <= 2521.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1408.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #92
                        if (x[1] <= 2543.5) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1832.5) {
                                    if (x[1] <= 1507.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1552.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[1] <= 1787.5) {
                                                if (x[0] <= 1668.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1884.5) {
                                        if (x[1] <= 1873.0) {
                                            if (x[1] <= 1867.5) {
                                                if (x[1] <= 1847.5) {
                                                    if (x[1] <= 1841.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 1591.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1748.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #93
                        if (x[1] <= 2603.0) {
                            if (x[1] <= 2377.5) {
                                if (x[1] <= 2323.5) {
                                    if (x[1] <= 1260.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1707.5) {
                                            if (x[0] <= 534.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1107.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2394.5) {
                                    if (x[0] <= 1591.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2452.0) {
                                        if (x[1] <= 2412.5) {
                                            if (x[0] <= 1079.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 505.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 2417.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 1537.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2498.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1525.5) {
                                                if (x[0] <= 505.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #94
                        if (x[1] <= 2527.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1507.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1719.0) {
                                        if (x[1] <= 1638.0) {
                                            if (x[1] <= 1570.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1683.0) {
                                                if (x[1] <= 1674.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1758.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1787.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 507.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #95
                        if (x[0] <= 507.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 1787.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #96
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1997.5) {
                                if (x[1] <= 1864.0) {
                                    if (x[0] <= 1668.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1695.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2068.5) {
                                    if (x[1] <= 2024.5) {
                                        if (x[0] <= 1863.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2039.5) {
                                            if (x[0] <= 1746.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2050.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 1642.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1656.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #97
                        if (x[1] <= 2502.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1507.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1719.0) {
                                        if (x[1] <= 1638.0) {
                                            if (x[0] <= 1642.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1681.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 1683.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1800.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 2532.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #98
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 2540.5) {
                                if (x[0] <= 1748.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #99
                        if (x[1] <= 2633.0) {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1498.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1721.5) {
                                        if (x[1] <= 1683.0) {
                                            if (x[1] <= 1640.5) {
                                                if (x[1] <= 1628.5) {
                                                    if (x[0] <= 1642.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1642.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1748.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 534.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #100
                        if (x[0] <= 534.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 1498.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1748.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }