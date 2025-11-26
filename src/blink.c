#include "pico/stdlib.h"

#define LED_PIN 29
#define HALF_CYCLE 250

int main() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        sleep_ms(HALF_CYCLE);
        gpio_put(LED_PIN, false);
        sleep_ms(HALF_CYCLE);
        gpio_put(LED_PIN, true);
    }
}
