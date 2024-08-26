//以下に、旧バージョンと新バージョンのコード例を示します。

//旧バージョン:
/*
const int ledPin = 13;
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  ledcWrite(ledChannel, 128); // 50% duty cycle
}
*/
//新バージョン:
const int ledPin = 21;
const int freq = 5000;
const int resolution = 8;

void setup() {
  ledcAttach(ledPin, freq, resolution);
}

void loop() {
  ledcWrite(ledPin, 128); // 50% duty cycle
}

//これで、Arduino IDE 3.0でのLEDC関数の使用方法がより具体的に理解できると思います。何か他に質問があれば、どうぞお知らせください！



