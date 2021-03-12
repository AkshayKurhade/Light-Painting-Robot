#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <Adafruit_NeoPixel.h>
#define LED_PIN    4

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 10

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


Adafruit_DCMotor *myMotor = AFMS.getMotor(2);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(3);

void setup() {
  AFMS.begin();  // create with the default frequency 1.6KHz

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
  Serial.begin(9600);
}

void loop() {
  strip.clear();
  delay(10000);
  uint8_t i;
  myMotor->setSpeed(120);
  myMotor->run(FORWARD);
  myMotor2->setSpeed(120);
  myMotor2->run(FORWARD);
  povchar('4');
  povchar('M');
  povchar('A');
  povchar('R');
  povchar('Y');
  povchar('L');
  povchar('A');
  povchar('N');
  povchar('D');
  //  povchar('A');
  //  povchar('Z');
  //  povchar('E');
  delay(200);
  for (int j = 0; j < 10; j++)
  {
    strip.setPixelColor(j, strip.Color(255, 255, 255) );
    strip.setBrightness(10);
    strip.show();
  }
  myMotor->run(RELEASE);
  myMotor2->run(RELEASE);
  delay(2000);
  for (int j = 0; j < 10; j++)
  {
    strip.clear();
    strip.show();
  }
}


void povchar(char temp)
{
  uint32_t color = strip.Color(255, 0,   0);
  switch (temp)
  {
    case '#':
      {

        bool frame1[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        bool frame2[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        bool frame3[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame4[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        bool frame5[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        bool frame6[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame7[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 1, 1, 0, 0, 0, 0};
        setpixels(frame1, color);
        setpixels(frame2, color);
        setpixels(frame3, color);
        setpixels(frame4, color);
        setpixels(frame5, color);
        setpixels(frame6, color);
        setpixels(frame7, color);
        setpixels(frame8, color);
        delay(70);
        break;
      }
    case 'A':
      {
        uint32_t colorA = strip.Color(0, 255,   0);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame4[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame5[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame6[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};;
        bool frame8[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0};;
        setpixels(frame1, colorA);
        setpixels(frame2, colorA);
        setpixels(frame3, colorA);
        setpixels(frame4, colorA);
        setpixels(frame5, colorA);
        setpixels(frame6, colorA);
        setpixels(frame7, colorA);
        setpixels(frame8, colorA);
        delay(70);
        break;

      }
    case 'K':
      {
        //        color = strip.Color(255, 0,   0);
        bool frame1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {0, 0, 0, 1, 1, 1, 1, 0, 0, 0};
        bool frame4[] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0};
        bool frame5[] = {0, 1, 1, 0, 0, 0, 0, 1, 1, 0};
        bool frame6[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame7[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, color);
        setpixels(frame2, color);
        setpixels(frame3, color);
        setpixels(frame4, color);
        setpixels(frame5, color);
        setpixels(frame6, color);
        setpixels(frame7, color);
        setpixels(frame8, color);
        delay(70);
        break;
      }
    case 'C':
      {
        uint32_t colorC = strip.Color(0, 127,  127);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame3[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame4[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame5[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame6[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorC);
        setpixels(frame2, colorC);
        setpixels(frame3, colorC);
        setpixels(frame4, colorC);
        setpixels(frame5, colorC);
        setpixels(frame6, colorC);
        setpixels(frame7, colorC);
        setpixels(frame8, colorC);
        delay(70);
        break;
      }
    case 'R':
      {
        uint32_t colorR = strip.Color(0, 0, 255);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame4[] = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame5[] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1};
        bool frame6[] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1};
        bool frame7[] = {1, 1, 0, 0, 1, 1, 1, 1, 1, 1};
        bool frame8[] = {1, 1, 0, 0, 1, 1, 1, 1, 1, 1};
        setpixels(frame1, color);
        setpixels(frame2, color);
        setpixels(frame3, color);
        setpixels(frame4, color);
        setpixels(frame5, color);
        setpixels(frame6, color);
        setpixels(frame7, color);
        setpixels(frame8, color);
        delay(70);
        break;
      }
    case 'Z':
      {
        uint32_t colorZ = strip.Color(60, 255,  127);
        bool frame1[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame2[] = {1, 1, 1, 0, 0, 0, 0, 0, 1, 1};
        bool frame3[] = {1, 1, 0, 1, 0, 0, 0, 0, 1, 1};
        bool frame4[] = {1, 1, 0, 0, 1, 0, 0, 0, 1, 1};
        bool frame5[] = {1, 1, 0, 0, 0, 1, 0, 0, 1, 1};
        bool frame6[] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 1};
        bool frame7[] = {1, 1, 0, 0, 0, 0, 0, 1, 1, 1};
        bool frame8[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        setpixels(frame1, colorZ);
        setpixels(frame2, colorZ);
        setpixels(frame3, colorZ);
        setpixels(frame4, colorZ);
        setpixels(frame5, colorZ);
        setpixels(frame6, colorZ);
        setpixels(frame7, colorZ);
        setpixels(frame8, colorZ);
        delay(70);
        break;
      }
    case 'E':
      {
        uint32_t  colorE = strip.Color(127, 127,  60);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame3[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame4[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame5[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    // Marathi M
    //    case 'M':
    //      {
    //        uint32_t  colorE = strip.Color(255, 0, 0);
    //        bool frame1[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
    //        bool frame2[] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    //        bool frame3[] = {0, 1, 0, 1, 0, 0, 1, 0, 0, 0};
    //        bool frame4[] = {0, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    //        bool frame5[] = {0, 0, 0, 1, 0, 0, 1, 0, 0, 0};
    //        bool frame6[] = {0, 0, 0, 1, 0, 0, 1, 0, 0, 0};
    //        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    //        bool frame8[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
    //        setpixels(frame1, colorE);
    //        setpixels(frame2, colorE);
    //        setpixels(frame3, colorE);
    //        setpixels(frame4, colorE);
    //        setpixels(frame5, colorE);
    //        setpixels(frame6, colorE);
    //        setpixels(frame7, colorE);
    //        setpixels(frame8, colorE);
    //
    //
    //        delay(70);
    //        break;
    //
    //      }
    case 'X':
      {
        uint32_t  colorE = strip.Color(255, 0, 0);
        bool frame1[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
        bool frame2[] = {0, 0, 1, 0, 0, 0, 1, 0, 0, 0};
        bool frame3[] = {0, 1, 0, 1, 0, 1, 1, 0, 0, 0};
        bool frame4[] = {1, 0, 0, 1, 0, 1, 1, 0, 0, 0};
        bool frame5[] = {1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
        bool frame8[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'V':
      {
        uint32_t  colorE = strip.Color(255, 0, 0);
        bool frame1[] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
        bool frame2[] = {0, 1, 0, 1, 0, 0, 1, 0, 0, 0};
        bool frame3[] = {0, 1, 0, 1, 1, 1, 1, 1, 1, 0};
        bool frame4[] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 1};
        bool frame5[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'Flag':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame3[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame4[] = {0, 0, 0, 0, 1, 0, 0, 0, 1, 0};
        bool frame5[] = {0, 0, 0, 0, 0, 1, 0, 1, 0, 0};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'Y':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame2[] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0};
        bool frame3[] = {0, 0, 0, 0, 0, 0, 1, 1, 0, 0};
        bool frame4[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
        bool frame5[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 1, 1, 0, 0};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'M':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
        bool frame4[] = {0, 0, 0, 0, 0, 0, 1, 1, 0, 0};
        bool frame5[] = {0, 0, 0, 0, 0, 0, 1, 1, 0, 0};
        bool frame6[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame8[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'L':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame4[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame5[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame6[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame7[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'N':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 0};
        bool frame4[] = {0, 0, 0, 0, 0, 1, 1, 0, 0, 0};
        bool frame5[] = {0, 0, 0, 1, 1, 0, 0, 0, 0, 0};
        bool frame6[] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0};
        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame8[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case 'D':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame3[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame4[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame5[] = {1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
        bool frame6[] = {0, 0, 1, 1, 1, 1, 1, 1, 0, 0};
        bool frame7[] = {0, 0, 1, 1, 1, 1, 1, 1, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case '4':
      {
        uint32_t  colorE = strip.Color(255, 0,  0);
        bool frame1[] = {0, 0, 0, 1, 1, 1, 0, 0, 0, 0};
        bool frame2[] = {0, 0, 0, 1, 1, 1, 1, 0, 0, 0};
        bool frame3[] = {0, 0, 0, 1, 1, 0, 1, 1, 0, 0};
        bool frame4[] = {0, 0, 0, 1, 1, 0, 0, 1, 1, 0};
        bool frame5[] = {0, 0, 0, 1, 1, 0, 0, 0, 1, 1};
        bool frame6[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame7[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame8[] = {0, 0, 0, 1, 1, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, colorE);
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
    case '|':
      {
        uint32_t  colorE = strip.Color(192, 192,  192);
        bool frame1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame3[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame4[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame5[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame6[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        bool frame7[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        bool frame8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        setpixels(frame1, colorE);
        setpixels(frame2, strip.Color(192, 192,  192));
        setpixels(frame3, colorE);
        setpixels(frame4, colorE);
        setpixels(frame5, colorE);
        setpixels(frame6, colorE);
        setpixels(frame7, colorE);
        setpixels(frame8, colorE);


        delay(70);
        break;

      }
  }
}

void setpixels(bool * pixel_array, uint32_t color)
{
  strip.clear();
  for (int i = 0; i < 10; i++)
  {
    if (pixel_array[i] == 1)
    {
      strip.setPixelColor(i, color);       //  Set pixel's color (in RAM)
      strip.show();
      //      strip.clear();
    }
    else
    {
      strip.setPixelColor(i, strip.Color(0, 0, 0) );
    }

  }

  delay(70);
  for (int j = 0; j < 10; j++)
  {
    strip.clear();

  }
  strip.show();
}
