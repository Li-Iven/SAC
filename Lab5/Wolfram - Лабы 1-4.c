Выполнять:
	в Wolfram Cloud.
	Wolfram Engine + Jupyter тоже подходит, но эта среда нестабильна в установке и работе, потому все же лучше Wolfram Cloud.
	

Wolfram Лаба 1:
	Взять шаблон из папки "1 - Лаба 1" в папке материалов Wolfram:
	https://drive.google.com/file/d/1PRLY7oLbtTZBVbyHhWBrnXuszfOOt42f/view?usp=sharing
	и выполнить то же задание, что и для первой лабы по Sage (но без задания про квадратик - только анализ функции и графики):
		Для заданной формулой функции найти:
		Область определения функции.
		Является ли функция четной или нечетной, является ли периодической.
		Точки пересечения графика с осями координат.
		Промежутки знакопостоянства.
		Промежутки возрастания и убывания.
		Точки экстремума и значения в этих точках.
		Непрерывность. Наличие точек разрыва и их классификация.
		Асимптоты.
		Построить график функции, асимптоты, промежутки знакопостоянства. (см. папку с материалами).
		Необходимо также сделать минимальное, но оформление решения, а не просто набор ответов.
		Справочные материалы:
		Гусак, 1999г. - исследование графиков
		Ефимов, Поспелов — т.2, стр. 86
		Ильин, Поздняк — т.1, стр. 143 и стр. 300-327
		Пискунов — стр. 144-184

	Папка материалов, включая ролики с разбором, как делать лабу:
	https://drive.google.com/drive/folders/1nHdGZN8UrgJPpU6ZV6H_lBWczE7clBCr?usp=sharing
		
		
Wolfram Лаба 2:
	Взять задание Sage лаба 2.2 (Полиномы, НОД, расширенный Евклид) и переделать на wolfram.
	Т.е. сделать свою реализацию функции расширенного алгоритма Евклида для полиномов.
	Расширенный алгоритм Евклида возвращать должен 3 значения.
	Должна быть работа с коэффициентами(нормализация полиномов).
	Должны быть составлены условия для проверки:
		1.что ваш НОД = f*ваше U + g*ваше V
		2.что ваш НОД идентичен НОД от wolfram
			(при условии нормализации результатов)
	
	
Wolfram Лаба 3:
	Взять задание Sage лаба 3(ДУ и хищник-жертва) и переделать на wolfram.
	Добавить слайдеры для изменения параметров модели (a, b, c, d и т.д.)
	

Wolfram Лаба 4: Матрицы, СЛАУ
	Взять задание Sage лаба 2.3(приведение ур-я поверхности в пространстве к каноническому виду)
	и выполнить без части по LaTeX.
	
	Должно быть:
		задание системы уравнений для поиска собс. чисел в общем виде,
		получение слау не вручную, а через матричные операции умножения,
		решение этой системы,
		получение характеристического полинома через определитель,
		автоматизированное сравнение с хар. полиномом по встроенным функциям Wolfram,
		решение хар. полинома и получение таким образом собс. чисел,
		автоматизированная проверка собственных чисел с встроенными в Wolfram функциями по получению собс. чисел,
		аналогично для собс. векторов.
		График для исходного,
		график для уравнения в каноническом виде.