const int O1 = 6;
const int O2 = 7;
const int D[4] = {5, 4, 3, 2};
const int abdul = 8;
int flag;
int p[4]={0};
int t[16]={0};
int a[16] = {0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0};

void setup()
{
  Serial.begin(9600);
  pinMode(O1, OUTPUT);
  pinMode(O2, OUTPUT);
  for (int i = 0; i < 4; i++)
  {
    pinMode(D[i], INPUT);
  }
  pinMode(8, OUTPUT);
}

void front()
{
  digitalWrite(O1, HIGH);
  digitalWrite(O2, LOW);
  delay(2000);
  digitalWrite(O1, LOW);
}

void back()
{
  digitalWrite(O2, HIGH);
  digitalWrite(O1, LOW);
   delay(20);
  digitalWrite(O2, LOW);
   digitalWrite(O1, LOW);

}

void change()
{
  tone(abdul,300);
  delay(800);
  noTone(abdul);
  delay(2000);
  for (int i = 0; i < 4; i++)
  {
    a[i] = digitalRead(D[i]);
    if (a[i] == 1)
    {
      digitalWrite(a[i], HIGH);
    }
    else
    {
      digitalWrite(a[i], LOW);
    }
    Serial.print(a[i]);
  }
  tone(abdul, 300);
  delay(800);
  noTone(abdul);
  delay(2000);
  for (int j = 4, k = 0; j < 8; j++, k++)
  {
    a[j] = digitalRead(D[k]);

    if (a[j] == 1)
    {
      digitalWrite(a[j], HIGH);
    }
    else
    {
      digitalWrite(a[j], LOW);
    }
    Serial.print(a[j]);
  }
  tone(abdul, 300);
  delay(800);
  noTone(abdul);
  delay(3000);
  for (int g = 8, u = 0; g < 12; g++, u++)
  {
    a[g] = digitalRead(D[u]);
    if (a[g] == 1)
    {
      digitalWrite(a[g], HIGH);
    }
    else
    {
      digitalWrite(a[g], LOW);
    }
    Serial.print(a[g]);
  }
  tone(abdul, 300);
  delay(800);
  noTone(abdul);
  delay(2000);
  for (int q = 12, e = 0; q < 16; q++, e++)
  {
    a[q] = digitalRead(D[e]);
    if (a[q] == 1)
    {
      digitalWrite(a[q], HIGH);
    }
    else
    {
      digitalWrite(a[q], LOW);
    }
    Serial.print(a[q]);
  }
  
}



void loop()
{
  start:

  for (int i = 0; i < 4; i++)
  {
    p[i] = digitalRead(D[i]);
    Serial.print(p[i]);
  }
  Serial.println("");

  if (p[0] == 1 && p[1] == 0 && p[2] == 1 && p[3] == 0)
  {
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int i = 0; i < 4; i++)
    {
      t[i] = digitalRead(D[i]);
      Serial.print(t[i]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int j = 4, k = 0; j < 8; j++, k++)
    {
      t[j] = digitalRead(D[k]);
      Serial.print(t[j]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int g = 8, u = 0; g < 12; g++, u++)
    {
      t[g] = digitalRead(D[u]);
      Serial.print(t[g]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int q = 12, e = 0; q < 16; q++, e++)
    {
      t[q] = digitalRead(D[e]);
      Serial.print(t[q]);
    }

    delay(500);
    flag = 0;
    for (int i = 0; i < 16; i++)
    {
      if (t[i] == a[i])
      {
        flag = 1;

      }
      else
      {
        flag = 0;
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        break;
      }
    }
    if (flag == 1)
    {
      front();
    }
  }

  else if (p[0] == 1 && p[1] == 0 && p[2] == 1 && p[3] == 1 )
  {
    back();
  }
  else if (p[0] == 1 && p[1] == 1 && p[2] == 0 && p[3] == 0)
  {
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int i = 0; i < 4; i++)
    {
      t[i] = digitalRead(D[i]);
      Serial.print(t[i]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int j = 4, k = 0; j < 8; j++, k++)
    {
      t[j] = digitalRead(D[k]);
      Serial.print(t[j]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int g = 8, u = 0; g < 12; g++, u++)
    {
      t[g] = digitalRead(D[u]);
      Serial.print(t[g]);
    }
    tone(abdul, 300);
    delay(200);
    noTone(abdul);
    delay(2000);
    for (int q = 12, e = 0; q < 16; q++, e++)
    {
      t[q] = digitalRead(D[e]);
      Serial.print(t[q]);
    }

    flag = 0;
    for (int i = 0; i < 16; i++)
    {
      if (t[i] == a[i])
      {
        flag = 1;

      }
      else
      {
        flag = 0;
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        tone(abdul,600);
        delay(500);
        noTone(abdul);
        delay(650);
        break;
      }
    }
    if (flag == 1)
    {
      change();
    }
  }

  
}
