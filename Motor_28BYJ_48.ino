/*
  Creado por: Juan Dominguez Rodriguez
  Movimiento normal motor  28BYJ-48
  https://drtolox.com
*/
 
// Definimos los pines donde tenemos conectadas las bobinas
#define IN1  8
#define IN2  9
#define IN3  10
#define IN4  11

 
// Secuencia de pasos normal (par máximo)

int paso [4][4] =
{
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};

//A continuacin hacemos solo parpadear el led 13
int led = 13;


// Movimiento por ola (par menor)
//int paso [4][4] =
//{
//  {1, 0, 0, 0},
//  {0, 1, 0, 0},
//  {0, 0, 1, 0},
//  {0, 0, 0, 1}
//};


//Movimiento de medio paso 
//int paso [8][4] =
//{
//  {1, 0, 0, 0},
//  {1, 1, 0, 0},
//  {0, 1, 0, 0},
//  {0, 1, 1, 0},
//  {0, 0, 1, 0},
//  {0, 0, 1, 1},
//  {0, 0, 0, 1},
//  {1, 0, 0, 1}
//}; 
 
 
 /******************************************************************************************************/
 
void setup()
{
  // Todos los pines en modo salida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(led, OUTPUT);
}
 
/********************************************************************************************************/ 
 
void loop()


{ 
 for (int i = 0; i < 4; i++)
    {
        digitalWrite(IN1, paso[i][3]);
        digitalWrite(IN2, paso[i][2]);
        digitalWrite(IN3, paso[i][1]);
        digitalWrite(IN4, paso[i][0]);
        digitalWrite(led, HIGH);
        delay(2);
    }
    
    //for (int i = 0; i < 4; i++)
    //{
      //digitalWrite(IN1, paso[i][3]);
      //digitalWrite(IN2, paso[i][2]);
      //digitalWrite(IN3, paso[i][1]);
      //digitalWrite(IN4, paso[i][0]);
      //delay(4);
    //}
    
            // wait for a second
}
