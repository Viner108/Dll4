// Dll4.cpp : Определяет экспортируемые функции для DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dll4.h"


// Пример экспортированной переменной
DLL4_API int nDll4=0;

// Пример экспортированной функции.
DLL4_API int fnDll4(void)
{
    return 0;
}

// Конструктор для экспортированного класса.
CDll4::CDll4()
{
    return;
}
