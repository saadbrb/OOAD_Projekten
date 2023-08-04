
#include "Navigation.h"
#include "NaviEconomic.h"
#include "NaviFast.h"
#include "NaviScenic.h"

int main() {

    NaviFast fast_strategy;
    Navigation navigator(&fast_strategy);
    navigator.init();

    NaviScenic scenic_strategy;
    navigator.setStrategy(&scenic_strategy);
    navigator.init();

    NaviEconomic economic_strategy;
    navigator.setStrategy(&economic_strategy);
    navigator.init();
    return 0;
}
