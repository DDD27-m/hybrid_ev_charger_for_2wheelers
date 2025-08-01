HYBRID EV CHARGER – DUAL SOURCE SMART BATTERY CHARGING SYSTEM

A sustainable and intelligent EV charging system that seamlessly switches between solar power (DC) and grid power (AC) based on ambient light and availability, 
ensuring efficient energy utilization and 24x7 battery charging. Controlled by an Arduino microcontroller, the system monitors environmental conditions and battery
safety parameters to manage energy input and cooling.

FEATURES

 * Automatic Switching between Solar (DC) and Grid (AC) power using relays
 * Solar Power (12V DC) for daytime battery charging
 * Grid Power (230V AC) fallback for nighttime or cloudy conditions
 * Battery Temperature Monitoring with cooling fan control Controlled using an Arduino Uno
 * Real-time power source selection based on LDR light sensing
 * Efficient charging with boost converters (12V to 48V)

SYSTEM OVERVIEW

Power Sources:
* Grid Power (230V AC): Used at night or low light via relay and transformer.
* Solar Power (12V DC): Primary source during the day using a 12V, 20W panel.

OPERATION FLOW

 Daytime (Solar):
* Solar panel outputs 12V DC.
* Passes through DC-DC boost converter (12V → 48V).
* Power routed through Normally Closed (NC) relay to the battery.

Nighttime (Grid):
* LDR detects low light; Arduino switches to Normally Open (NO) relay.
* AC power stepped down to 12V via transformer.
* Rectified and regulated (Bridge Rectifier + Capacitor + 7812 IC).
* DC power passed through boost converter (12V → 48V) for charging.

COMPONENTS USED

| Component | Description |
|----------|-------------|
| Solar Panel | 12V, 20W photovoltaic panel |
| DC-DC Boost Converter | Steps up 12V to 48V |
| Relay Modules | NC and NO relays for source switching |
| LDR Sensor | Detects ambient light level |
| Arduino Uno | Central control unit |
| ULN2003 Driver | Relay driver IC |
| Temperature Sensor (e.g., LM35/DHT22) | Monitors battery temperature |
| DC Motor + Fan | Cools battery if overheated |
| Transformer + Rectifier + 7812 IC | Converts and regulates AC to 12V DC |




Software Details

Programming Language:
C/C++ using Arduino IDE

Libraries Used:
* Relay.h – for relay control
* DHT.h or LM35 logic – for temperature monitoring
* LDR custom logic – for light intensity detection
* L293D – for fan/motor control

MAIN FUNCTIONALITIES
* Read LDR value to determine day/night
* Read temperature sensor data
* Switch power source relays accordingly
* Activate fan when temperature exceeds threshold

HOW TO RUN
1. Connect Components as per the circuit diagram.
2. Upload the code using Arduino IDE.
3. Power the Arduino (via USB or 12V adapter).
4. Observe:
During daylight: solar charging begins.
At night: system auto-switches to grid charging.
If battery overheats: fan activates.

FUTURE IMPROVEMENTS
* Add real-time battery level monitoring
* Integrate with IoT dashboard (e.g., Blynk or ThingSpeak)
* Add safety cut-off on overcharge or short circuit
Implement data logging to SD card or cloud


LICENSE
This project is open-source and available under the LICENSE.

CONTRIBUTORS
Divyadharsini Dhanaraj – Developer & System Designer
