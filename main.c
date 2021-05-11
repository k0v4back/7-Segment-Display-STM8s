#include "stm8s.h"

#define P7 7
#define P6 6
#define P5 5
#define P4 4
#define P3 3
#define P2 2
#define P1 1
#define P0 0

void setnumber (uint8_t number);
void numberOnIndicator(unsigned number);

void delay(volatile uint32_t count) {
  for( ; count > 0; --count);
}

int main(void)
{
  while(1)
  {
    numberOnIndicator(1204);
  }
}

void setnumber (uint8_t number)
{
  switch (number)
  {
    case 0:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR |= GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR &= ~GPIO_PIN_2;//G
      break;
    }
     case 1:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR &= ~GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR &= ~GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR &= ~GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR &= ~GPIO_PIN_2;//G
      break;
    }
    case 2:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |=GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR &= ~GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR |= GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR &= ~GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
    case 3:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR &= ~GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |=GPIO_PIN_2;//G
      break;
    }
    case 4:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR &= ~GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR &= ~GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
    case 5:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR &= ~GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
    case 6:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR &= ~GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR |= GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
    case 7:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR &= ~GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR &= ~GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR &= ~GPIO_PIN_2;//G
      break;
    }
    case 8:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR |= GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
    case 9:
    {
      GPIOC->DDR |= (1<<P3); GPIOC->CR1 |= (1<<P3); GPIOC->ODR |= GPIO_PIN_3;//A
      GPIOC->DDR |= (1<<P4); GPIOC->CR1 |= (1<<P4); GPIOC->ODR |= GPIO_PIN_4;//B
      GPIOC->DDR |= (1<<P5); GPIOC->CR1 |= (1<<P5); GPIOC->ODR |= GPIO_PIN_5;//C
      GPIOC->DDR |= (1<<P6); GPIOC->CR1 |= (1<<P6); GPIOC->ODR |= GPIO_PIN_6;//D
      GPIOC->DDR |= (1<<P7); GPIOC->CR1 |= (1<<P7); GPIOC->ODR &= ~GPIO_PIN_7;//E
      GPIOD->DDR |= (1<<P1); GPIOD->CR1 |= (1<<P1); GPIOD->ODR |= GPIO_PIN_1;//F
      GPIOD->DDR |= (1<<P2); GPIOD->CR1 |= (1<<P2); GPIOD->ODR |= GPIO_PIN_2;//G
      break;
    }
  }
}

void numberOnIndicator(unsigned number)
{
    unsigned units;
    unsigned dozens;
    unsigned hundreds;
    unsigned thousand;

    thousand = number / 1000;
    hundreds = (number % 1000) / 100;
    dozens = (number % 100) / 10;
    units = number % 10;
    
    if(number > 0)
    {
      GPIOB->DDR |= (1<<P5); GPIOB->CR1 |= (1<<P5); GPIOB->ODR |= GPIO_PIN_5; //edin
      GPIOB->DDR |= (1<<P4); GPIOB->CR1 |= (1<<P4); GPIOB->ODR &= ~GPIO_PIN_4; //desytki
      GPIOD->DDR |= (1<<P5); GPIOD->CR1 |= (1<<P5); GPIOD->ODR &= ~GPIO_PIN_5; //sotni
      GPIOD->DDR |= (1<<P4); GPIOD->CR1 |= (1<<P4); GPIOD->ODR &= ~GPIO_PIN_4; //tish
      setnumber(units);
      delay(25);
    }
    if(number > 10)
    {
      GPIOB->DDR |= (1<<P5); GPIOB->CR1 |= (1<<P5); GPIOB->ODR |=GPIO_PIN_5; //edin
      GPIOB->DDR |= (1<<P4); GPIOB->CR1 |= (1<<P4); GPIOB->ODR |= GPIO_PIN_4; //desytki
      GPIOD->DDR |= (1<<P5); GPIOD->CR1 |= (1<<P5); GPIOD->ODR &= ~GPIO_PIN_5; //sotni
      GPIOD->DDR |= (1<<P4); GPIOD->CR1 |= (1<<P4); GPIOD->ODR &= ~GPIO_PIN_4; //tish
      setnumber(dozens);
      delay(25);
    }
    if(number > 100)
    {
      GPIOB->DDR |= (1<<P5); GPIOB->CR1 |= (1<<P5); GPIOB->ODR &= ~GPIO_PIN_5; //edin
      GPIOB->DDR |= (1<<P4); GPIOB->CR1 |= (1<<P4); GPIOB->ODR &= ~GPIO_PIN_4; //desytki
      GPIOD->DDR |= (1<<P5); GPIOD->CR1 |= (1<<P5); GPIOD->ODR |= GPIO_PIN_5; //sotni
      GPIOD->DDR |= (1<<P4); GPIOD->CR1 |= (1<<P4); GPIOD->ODR &= ~GPIO_PIN_4; //tish
      setnumber(hundreds);
      delay(25);
    }
    if(number > 1000)
    {
      GPIOB->DDR |= (1<<P5); GPIOB->CR1 |= (1<<P5); GPIOB->ODR &= ~GPIO_PIN_5; //edin
      GPIOB->DDR |= (1<<P4); GPIOB->CR1 |= (1<<P4); GPIOB->ODR &= ~GPIO_PIN_4; //desytki
      GPIOD->DDR |= (1<<P5); GPIOD->CR1 |= (1<<P5); GPIOD->ODR &= ~GPIO_PIN_5; //sotni
      GPIOD->DDR |= (1<<P4); GPIOD->CR1 |= (1<<P4); GPIOD->ODR |= GPIO_PIN_4; //tish
      setnumber(thousand);
      delay(25);
    }
}