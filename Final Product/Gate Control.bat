cd C:\valve-control\Final Product
arduino-cli compile --fqbn arduino:avr:nano ValveControl
arduino-cli upload -p COM10 --fqbn arduino:avr:nano ValveControl
start ValveGUI