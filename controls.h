void turnLeft(int time, int power) {

    create_drive_direct(-power, power);
    msleep(time);
    create_stop();


}

void turnRight(int time, int power) {

    create_drive_direct(power, -power);
    msleep(time);
    create_stop();

}

void moveForward(int time, int power) {

    create_drive_direct(-power, -power);
    msleep(time);
    create_stop();

}
void moveBackward(int time, int power) {

    create_drive_direct(power, power);
    msleep(time);
	create_stop();
}
void moveClaw(int x) {

    set_servo_position(1, x);
    msleep(100);

}

void maxArm(int x) {
    int y = x - get_servo_position(0);
    int i = 0;
    int z = 0;
    for(i=0; i<18; i++){
        z=get_servo_position(0);
        set_servo_position(0,z+((y+1)/18));
        //set_servo_position(0,z+50);
        msleep(50);
    }
}

/*void moveArm(int x) {

        done = 0;

    for(int i = 10, i > 0, i = i - 1) 
    	set_servo_position(0, x - i);
        sleep(0.1);
        done = 1;

}*/
void openClaw() {

    set_servo_position(1, 500);
    msleep(100);

}

void openSlow() {
	int i=0;
	int y = 500-get_servo_position(1);
	int z = get_servo_position(1);
	for(i=0; i<8; i++) {
	    set_servo_position(1, z+((i+1)*y)/8);
	    msleep(50);
	}
}

void closeClaw() {

    set_servo_position(1, 1100);
    msleep(100);

}
