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

  r += 0.002;

//  delay(5);
}

void writeWord(int data, int le, int clk, long w) {
  digitalWrite(le, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x20000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x10000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x08000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x04000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x02000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x01000l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00800l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00400l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00200l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00100l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00080l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00040l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00020l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00010l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00008l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00004l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00002l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);
  
  digitalWrite(data, !!(w & 0x00001l));
  //delay(DELAY);
  digitalWrite(clk, HIGH);
  //delay(DELAY);
  digitalWrite(clk, LOW);
  //delay(DELAY);

  digitalWrite(le, LOW);
  //delay(DELAY);
  digitalWrite(le, HIGH);
  //delay(DELAY);
}

