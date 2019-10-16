cd C:\Users\CPMI-Fusion1\Desktop\GateControl
arduino-cli compile --fqbn arduino:avr:nano Gate_valve_Control
arduino-cli upload -p COM10 --fqbn arduino:avr:nano Gate_Valve_Control
start Gate_Valve_GUI