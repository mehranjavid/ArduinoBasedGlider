# Arduino Controlled Chuck Glider

Complete control over glider flight using arduino

**Introduction**
We will be upgrading a simple chuck glider to a point where we will have complete control over glider flight.

    The hardware we used:
    Servo Motors (TowerPro SG90 SG 90 180 Degree Servo Motor)
    DC Motor (N50 DC motor & propellers)
    Motor Controller (L298N For Arduino Dual H Bridge Motor Driver)
    Arduino UNO
    Wireless (NRF24L01 2.4GHz Wireless Transceiver)
    Joystick (KY-023 2 Axis Analog Joystick Module)
    Battery (Power Plus 9V Battery)
    Jumper Wires
    Adapter Cable for Arduino
    
**Build**

Questions to be answered in this section:
    1: How will you control the movement of the aircraft? What control mechanism you will use? How will your Arduino control them?

    2: How will you generate the thrust? Which motor and propeller? How will the Arduino control the motor?

    3: How will the two boards communicate?

    4: How will the pilot give commands?

    5: How will everything be powered?

    6: What will be the total added weight?

Before we start attaching motors and Arduino to the glider we have to make sure that our glider has movable flight control surfaces.

Control surfaces include Elevator, Ailerons, and Rudder. These control surfaces are used to control the movement of the aircraft.

Elevators to control the pitch of the glider, by moving elevators down we create more lift on the back of the plane which makes the plane go downwards and vice versa to go upwards.

Aileron to control the roll of the glider, they are located on the wings. To roll in one direction we create more lift on the opposite wing by moving the ailerons down, if we want to roll right we create more lift on the left-wing and less lift on the right wing and vice versa to roll left.

Rudder to control the yaw of the craft, it is located on the tail of the glider. So if we want to turn the aircraft toward the right we move the rudder to right and if we want to turn the aircraft towards the left we move the rudder to left

To control these flight control surfaces multiple Servo motors will be used, each attached at a specific place on glider check design video to have an idea of servos placements. These Servo motors will be directly connected to the Arduino and will be powered by the Arduino. A sample code to run servos is already uploaded to the Github repository.

After completing the flight control system we now have to look at the ways of generating and controlling thrust. For this, we will be using a Pair of N50 DC motor which has rated voltage 3.7V to 5V. To control the speed of the motor using Arduino we will use L298N Based Motor Driver Module (5V – 35V drive voltage), as it has the capability of controlling 2 motors at the same time.
Fitting the Arduino on the glider.
Now the next step is to install a communication system. We will be using NRF24L01 2.4GHz Wireless Transceiver, this module needs to be powered by 3.3V so it will be directly connected to the Arduino. One transceiver will be attached to the glider end and one will be at the user end communicating with each other. Now by just installing these two transceivers, we will not achieve two-way communication we need to come up with an easy-to-use input system for the pilot.
To communicate the pilot will use the joystick to give instructions to the Arduino, instructions like turn left, turn right, increase thrust, etc. These instructions will then be transmitted from the pilot end transmitter and will be received by the glider end receiver
Everything on the glider end will be power by a 9v battery. Servos and Motor controller module will be directly connected to the Arduino.

**Weight Calculation**
    Glider	40 grams	x 1
    Servo	13 grams	x3
    DC motor	10 grams	x2
    Motor Controller	26 grams	x 1
    Arduino Nano	7 grams	x 1
    Wireless modules	2.2 grams	x1
    Battery	76 grams	x 1
    TOTAL	210.2 grams	x 1
    
  ![mpi](https://user-images.githubusercontent.com/39021904/125176205-14f38580-e1eb-11eb-82f9-32fa9a8adc8c.jpg)
