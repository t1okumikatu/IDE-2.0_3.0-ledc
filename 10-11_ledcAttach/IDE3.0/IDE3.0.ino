
const int ledPin = 21;
const int freq = 5000;
const int resolution = 8;
const int ch1 = 1;
const int ch2 = 2;

void setup() {
  pinMode(ledPin,OUTPUT);
  ledcAttachChannel(ledPin, freq, resolution,ch1);
}

void loop() {
  ledcWrite(ledPin, 128); // 50% duty cycle
}

/*
const int ledPin = 21;      // LED接続ピン
const int freq = 5000;      // PWM周波数
const int ledChannel = 0;   // 使用するPWMチャネル
const int resolution = 8;   // PWMの分解能 (8ビット)

void setup() {
  // PWMのセットアップ
  ledcSetup(ledChannel, freq, resolution);

  // ledPinをPWMチャネルにアタッチ
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  // デューティサイクルを50%に設定 (128/255)
  ledcWrite(ledChannel, 128);
}
*/