const int DATA = 2;
const int LE = 3;
const int CLK = 4;
const int DELAY = 100;

float r = 0;
double d = 0;

void setup() {
  pinMode(DATA, OUTPUT);
  pinMode(LE, OUTPUT);
  pinMode(CLK, OUTPUT);

  digitalWrite(CLK, LOW);
  digitalWrite(DATA, LOW);
  digitalWrite(LE, HIGH);
//  Serial.begin(115200);
//  writeWord(DATA, LE, CLK, 0x3ffffl);
}

void loop() {
  d = sin(r) / 2;

  writeWord(DATA, LE, CLK, (long)(d * 0x3ffffl));
//  Serial.println(d);

  r += 0.02;

//  delay(5);
}

void writeWord(int data_pin, int le_pin, int clk_pin, long w) {
  int le = 1 << le_pin;
  int clk = 1 << clk_pin;
  int data;
  
  PORTD = le;
  
  data = (!!(w & 0x20000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x10000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x08000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x04000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x02000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x01000l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00800l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00400l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00200l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00100l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00080l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00040l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00020l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00010l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00008l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00004l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00002l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);
  
  data = (!!(w & 0x00001l)) << data_pin;
  PORTD = le | data;
  //delay(DELAY);
  PORTD = le | clk | data;
  //delay(DELAY);
  PORTD = le | data;
  //delay(DELAY);

  PORTD = 0;
  //delay(DELAY);
  PORTD = le;
  //delay(DELAY);
}

