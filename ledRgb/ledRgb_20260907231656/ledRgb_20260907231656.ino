const int pinoVermelho = 3;
const int pinoVerde = 5;
const int pinoAzul = 6;

void setup()
{
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoVerde, OUTPUT);
  pinMode(pinoAzul, OUTPUT);
}

void loop()
{
  // Vermelho
  definirCor(255, 0, 0);
  delay(1000);

  // Vermelho → amarelo
  for (int i = 0; i <= 255; i++)
  {
    definirCor(255, i, 0);
    delay(15);
  }

  // Amarelo
  delay(1000);

  // Amarelo → verde
  for (int i = 255; i >= 0; i--)
  {
    definirCor(i, 255, 0);
    delay(15);
  }

  // Verde
  delay(1000);

  // Verde → ciano
  for (int i = 0; i <= 255; i++)
  {
    definirCor(0, 255, i);
    delay(15);
  }

  // Ciano
  delay(1000);

  // Ciano → azul
  for (int i = 255; i >= 0; i--)
  {
    definirCor(0, i, 255);
    delay(15);
  }

  // Azul
  delay(1000);

  // Azul → roxo
  for (int i = 0; i <= 255; i++)
  {
    definirCor(i, 0, 255);
    delay(15);
  }

  // Roxo
  delay(1000);

  // Roxo → vermelho
  for (int i = 255; i >= 0; i--)
  {
    definirCor(255, 0, i);
    delay(15);
  }
}

void definirCor(int vermelho, int verde, int azul)
{
  analogWrite(pinoVermelho, vermelho);
  analogWrite(pinoVerde, verde);
  analogWrite(pinoAzul, azul);
}