/**********************Obs:*****************************************************
 *Tudo que estiver dentro dessas tags ou com // no inicio, são apenas comentários 
 *e não serão compilados pela IDE(serão ignorados)
 ******************************************************************************/

/*******************************************************************************
* Como programar o NodeMCU com a IDE do Arduino 
* Descrição: Pisca o LED conectado ao pino 13.
* Empresa: Átomos Eletrotécnica
* Site:http://grupoatomos.com.br/
* Data:21/02/2018
* Autor: Jurandir Hora.
* Referência: https://www.arduino.cc/reference/pt/#page-title
* Repositório: https://github.com/JurandirHora/grupoatomos/blob/master/Exemplo-01.ino
* Interessado: Eng.Marcelo
*******************************************************************************/

//Vejamos o que faz cada coisa

/*******************************************************************************
 Assim como uma variável, uma constante também armazena um valor na memória do 
 microcontrolador, entretanto, esse valor não pode ser alterado e é obrigatória 
 que haja uma atribuiçao (no caso led) do valor.
 ******************************************************************************/
const int led = D5; // pino onde o LED está conectado(Pino13)

/*******************************************************************************
 * A função setup() é chamada quando um Sketch (programa) é iniciado. 
 * É uada para inicializar variáveis, funções dos pin,definir as bibliotecas que 
 * serão usadas em conjunto, etc. 
 * A setup()função só será executada apenas uma vez, após cada inicialização ou 
 * reinicialização da placa
 ******************************************************************************/
void setup() {
  // Configura o pino D5(led) ligado a um LED como saída
  pinMode(led, OUTPUT);
}

/*******************************************************************************
 * função void loop(), repete-se consecutivamente enaqunto a placa estiver ligada,
 * permitindo o seu programa mudar e responder a essas mudanças provocadas pela 
 * lógica de sua programação.
 *******************************************************************************/
void loop() {
  digitalWrite(led, HIGH); // essa função acende o LED
  delay(1000); // aguarda 1 segundo
  digitalWrite(led, LOW); // apaga o LED
  delay(1000); // aguarda 1 segundo
}
