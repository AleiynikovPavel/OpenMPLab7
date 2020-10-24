# OpenMPLab7
### Задание (вариант 6)
Вычислить прямое произведение множеств А1, А2, А3, А4. Входные данные: множества чисел А1, А2, А3, А4, мощности множеств могут быть не равны между собой и мощность каждого множества больше или равна 1. Количество потоков определяется, исходя из мощностей множеств и не является параметром задачи.
### Вывод программы

<details>
  
```
1, 1, 1, 1
1, 1, 1, 2
1, 1, 1, 3
1, 1, 1, 4
1, 1, 1, 5
1, 1, 1, 6
1, 1, 2, 1
1, 1, 2, 2
1, 1, 2, 3
1, 1, 2, 4
1, 1, 2, 5
1, 1, 2, 6
1, 1, 3, 1
1, 1, 3, 2
1, 1, 3, 3
1, 1, 3, 4
1, 1, 3, 5
1, 1, 3, 6
1, 2, 1, 1
1, 2, 1, 2
1, 2, 1, 3
1, 2, 1, 4
1, 2, 1, 5
1, 2, 1, 6
1, 2, 2, 1
1, 2, 2, 2
1, 2, 2, 3
1, 2, 2, 4
1, 2, 2, 5
1, 2, 2, 6
1, 2, 3, 1
1, 2, 3, 2
1, 2, 3, 3
1, 2, 3, 4
1, 2, 3, 5
1, 2, 3, 6
1, 3, 1, 1
1, 3, 1, 2
1, 3, 1, 3
1, 3, 1, 4
1, 3, 1, 5
1, 3, 1, 6
1, 3, 2, 1
1, 3, 2, 2
1, 3, 2, 3
1, 3, 2, 4
1, 3, 2, 5
1, 3, 2, 6
1, 3, 3, 1
1, 3, 3, 2
1, 3, 3, 3
1, 3, 3, 4
1, 3, 3, 5
1, 3, 3, 6
1, 4, 1, 1
1, 4, 1, 2
1, 4, 1, 3
1, 4, 1, 4
1, 4, 1, 5
1, 4, 1, 6
1, 4, 2, 1
1, 4, 2, 2
1, 4, 2, 3
1, 4, 2, 4
1, 4, 2, 5
1, 4, 2, 6
1, 4, 3, 1
1, 4, 3, 2
1, 4, 3, 3
1, 4, 3, 4
1, 4, 3, 5
1, 4, 3, 6
1, 5, 1, 1
1, 5, 1, 2
1, 5, 1, 3
1, 5, 1, 4
1, 5, 1, 5
1, 5, 1, 6
1, 5, 2, 1
1, 5, 2, 2
1, 5, 2, 3
1, 5, 2, 4
1, 5, 2, 5
1, 5, 2, 6
1, 5, 3, 1
1, 5, 3, 2
1, 5, 3, 3
1, 5, 3, 4
1, 5, 3, 5
1, 5, 3, 6
2, 1, 1, 1
2, 1, 1, 2
2, 1, 1, 3
2, 1, 1, 4
2, 1, 1, 5
2, 1, 1, 6
2, 1, 2, 1
2, 1, 2, 2
2, 1, 2, 3
2, 1, 2, 4
2, 1, 2, 5
2, 1, 2, 6
2, 1, 3, 1
2, 1, 3, 2
2, 1, 3, 3
2, 1, 3, 4
2, 1, 3, 5
2, 1, 3, 6
2, 2, 1, 1
2, 2, 1, 2
2, 2, 1, 3
2, 2, 1, 4
2, 2, 1, 5
2, 2, 1, 6
2, 2, 2, 1
2, 2, 2, 2
2, 2, 2, 3
2, 2, 2, 4
2, 2, 2, 5
2, 2, 2, 6
2, 2, 3, 1
2, 2, 3, 2
2, 2, 3, 3
2, 2, 3, 4
2, 2, 3, 5
2, 2, 3, 6
2, 3, 1, 1
2, 3, 1, 2
2, 3, 1, 3
2, 3, 1, 4
2, 3, 1, 5
2, 3, 1, 6
2, 3, 2, 1
2, 3, 2, 2
2, 3, 2, 3
2, 3, 2, 4
2, 3, 2, 5
2, 3, 2, 6
2, 3, 3, 1
2, 3, 3, 2
2, 3, 3, 3
2, 3, 3, 4
2, 3, 3, 5
2, 3, 3, 6
2, 4, 1, 1
2, 4, 1, 2
2, 4, 1, 3
2, 4, 1, 4
2, 4, 1, 5
2, 4, 1, 6
2, 4, 2, 1
2, 4, 2, 2
2, 4, 2, 3
2, 4, 2, 4
2, 4, 2, 5
2, 4, 2, 6
2, 4, 3, 1
2, 4, 3, 2
2, 4, 3, 3
2, 4, 3, 4
2, 4, 3, 5
2, 4, 3, 6
2, 5, 1, 1
2, 5, 1, 2
2, 5, 1, 3
2, 5, 1, 4
2, 5, 1, 5
2, 5, 1, 6
2, 5, 2, 1
2, 5, 2, 2
2, 5, 2, 3
2, 5, 2, 4
2, 5, 2, 5
2, 5, 2, 6
2, 5, 3, 1
2, 5, 3, 2
2, 5, 3, 3
2, 5, 3, 4
2, 5, 3, 5
2, 5, 3, 6
3, 1, 1, 1
3, 1, 1, 2
3, 1, 1, 3
3, 1, 1, 4
3, 1, 1, 5
3, 1, 1, 6
3, 1, 2, 1
3, 1, 2, 2
3, 1, 2, 3
3, 1, 2, 4
3, 1, 2, 5
3, 1, 2, 6
3, 1, 3, 1
3, 1, 3, 2
3, 1, 3, 3
3, 1, 3, 4
3, 1, 3, 5
3, 1, 3, 6
3, 2, 1, 1
3, 2, 1, 2
3, 2, 1, 3
3, 2, 1, 4
3, 2, 1, 5
3, 2, 1, 6
3, 2, 2, 1
3, 2, 2, 2
3, 2, 2, 3
3, 2, 2, 4
3, 2, 2, 5
3, 2, 2, 6
3, 2, 3, 1
3, 2, 3, 2
3, 2, 3, 3
3, 2, 3, 4
3, 2, 3, 5
3, 2, 3, 6
3, 3, 1, 1
3, 3, 1, 2
3, 3, 1, 3
3, 3, 1, 4
3, 3, 1, 5
3, 3, 1, 6
3, 3, 2, 1
3, 3, 2, 2
3, 3, 2, 3
3, 3, 2, 4
3, 3, 2, 5
3, 3, 2, 6
3, 3, 3, 1
3, 3, 3, 2
3, 3, 3, 3
3, 3, 3, 4
3, 3, 3, 5
3, 3, 3, 6
3, 4, 1, 1
3, 4, 1, 2
3, 4, 1, 3
3, 4, 1, 4
3, 4, 1, 5
3, 4, 1, 6
3, 4, 2, 1
3, 4, 2, 2
3, 4, 2, 3
3, 4, 2, 4
3, 4, 2, 5
3, 4, 2, 6
3, 4, 3, 1
3, 4, 3, 2
3, 4, 3, 3
3, 4, 3, 4
3, 4, 3, 5
3, 4, 3, 6
3, 5, 1, 1
3, 5, 1, 2
3, 5, 1, 3
3, 5, 1, 4
3, 5, 1, 5
3, 5, 1, 6
3, 5, 2, 1
3, 5, 2, 2
3, 5, 2, 3
3, 5, 2, 4
3, 5, 2, 5
3, 5, 2, 6
3, 5, 3, 1
3, 5, 3, 2
3, 5, 3, 3
3, 5, 3, 4
3, 5, 3, 5
3, 5, 3, 6
4, 1, 1, 1
4, 1, 1, 2
4, 1, 1, 3
4, 1, 1, 4
4, 1, 1, 5
4, 1, 1, 6
4, 1, 2, 1
4, 1, 2, 2
4, 1, 2, 3
4, 1, 2, 4
4, 1, 2, 5
4, 1, 2, 6
4, 1, 3, 1
4, 1, 3, 2
4, 1, 3, 3
4, 1, 3, 4
4, 1, 3, 5
4, 1, 3, 6
4, 2, 1, 1
4, 2, 1, 2
4, 2, 1, 3
4, 2, 1, 4
4, 2, 1, 5
4, 2, 1, 6
4, 2, 2, 1
4, 2, 2, 2
4, 2, 2, 3
4, 2, 2, 4
4, 2, 2, 5
4, 2, 2, 6
4, 2, 3, 1
4, 2, 3, 2
4, 2, 3, 3
4, 2, 3, 4
4, 2, 3, 5
4, 2, 3, 6
4, 3, 1, 1
4, 3, 1, 2
4, 3, 1, 3
4, 3, 1, 4
4, 3, 1, 5
4, 3, 1, 6
4, 3, 2, 1
4, 3, 2, 2
4, 3, 2, 3
4, 3, 2, 4
4, 3, 2, 5
4, 3, 2, 6
4, 3, 3, 1
4, 3, 3, 2
4, 3, 3, 3
4, 3, 3, 4
4, 3, 3, 5
4, 3, 3, 6
4, 4, 1, 1
4, 4, 1, 2
4, 4, 1, 3
4, 4, 1, 4
4, 4, 1, 5
4, 4, 1, 6
4, 4, 2, 1
4, 4, 2, 2
4, 4, 2, 3
4, 4, 2, 4
4, 4, 2, 5
4, 4, 2, 6
4, 4, 3, 1
4, 4, 3, 2
4, 4, 3, 3
4, 4, 3, 4
4, 4, 3, 5
4, 4, 3, 6
4, 5, 1, 1
4, 5, 1, 2
4, 5, 1, 3
4, 5, 1, 4
4, 5, 1, 5
4, 5, 1, 6
4, 5, 2, 1
4, 5, 2, 2
4, 5, 2, 3
4, 5, 2, 4
4, 5, 2, 5
4, 5, 2, 6
4, 5, 3, 1
4, 5, 3, 2
4, 5, 3, 3
4, 5, 3, 4
4, 5, 3, 5
4, 5, 3, 6
```
</details>

### Задание перед лабораторной
Найти и испроавить ошибку в коде.
```
double z[N];
z[0]=100;
double h;
# pragma omp parallel for
for (i=0; i<N; i++)
{
  h = z[i-1]*sqrt(i);
  z[i] = h*(i+h);
}
```

Итерации цикла имеют зависимость по данным. Цыил на i-ой итерации обращается к элементу `z[i-1]`, который должен инициализироваться на предидущей итерации
Исправленный вариант:
```
double z[N];
z[0]=100;
double h;
# pragma omp parallel for
for (i=0; i<N; i++)
{
  h = h*(i-1+h)*sqrt(i);
  z[i] = h*(i+h);
}
```
