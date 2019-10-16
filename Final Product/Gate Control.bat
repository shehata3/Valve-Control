cd C:\Users\CPMI-Fusion1\Desktop\GateControl
arduino-cli compile --fqbn arduino:avr:nano ValveControl
arduino-cli upload -p COM10 --fqbn arduino:avr:nano ValveControl
start ValveGUI