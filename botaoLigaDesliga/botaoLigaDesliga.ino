/************************************************************************************************************************************************
                                                        CÓDIGO PARA PUSH BUTTON

  Material: Arduino / PushButton / Protoboard / Led / Resistor / Jampers
  Aluno: Jailson Correia
  Data: 27/08/2020
  Atualizado em 17/12/20 (primeira atualização)

*************************************************************************************************************************************************/ 

/******************************************************* MAPEAMENTO DE HARDWARE *****************************************************************/ 

#define botao 5
#define ledPin 7

/**************************************************************** CÓDIGO ************************************************************************/ 

void setup() {
  
  pinMode (ledPin, OUTPUT);
  pinMode (botao, INPUT_PULLUP);

}

void loop() {
  
  int estadoBotao = digitalRead (botao);           // Variável local ocupa menos espaço na memória
  if (estadoBotao == LOW) {                        // Quando o botão físico é precionado a porta 5 fica em estado LOW.
  delay (300);                                     // O intervalo de tempo de 300ms minimiza o efeito Bouce de acionamento do botão.
                                                   // Após verificar o estado do botão, o micro controlador vai esperar 300ms para só depois aceder o led.
  digitalWrite (ledPin, !digitalRead(ledPin));

  }
}// Final do Sketch
