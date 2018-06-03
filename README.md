### VHDL basics

FPGA Spartan 6 with VHDL

Included projects:

* test_blink: blink experiment, test the board.
* pwm: pwm controller with input, controls frequency and duty cycle, and prints the result on 2 4-digit tubes.
* digital clock. second and minute.

For each project, the main files are:

* PROJECT\_NAME.vhd
* PROJECT\_NAME\_testbench.vhd - for test
* PROJECT\_NAME.ucf - pins configuration

**PWM wave:**
can change frequency and duty cycle.
Demo:
![pwm][/media/pwm.gif]

**digital clock:**
60-ish system
Demo:
![pwm][/media/digital_clock.gif]