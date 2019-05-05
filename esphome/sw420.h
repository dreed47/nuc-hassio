#include "esphomelib.h"

using namespace esphomelib;

class MySW420Sensor : public PollingComponent, public sensor::Sensor {
 public:
  // constructor
  MySW420Sensor() : PollingComponent(15000) {}

  void setup() override {
    // This will be called by App.setup()
  }
  void loop() override {
    // This will be called by App.loop()
  }
  void update() override {
    publish_state(42.0);

  }

};