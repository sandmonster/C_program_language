//my_salary

#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
    const int MONTHS = 12;
    int m_salary, v_salary;

    printf("월급을 입력하시오 :");
    scanf("%d", &m_salary);

    v_salary = MONTHS * m_salary;

    printf("연봉은 %d입니다.\n", v_salary);
    printf("세금은 %f입니다.", v_salary * TAX_RATE);

    return 0;
}
