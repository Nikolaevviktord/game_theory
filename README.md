# Теория игр

Это репозиторий эксперимента по проведению игры "Сотрудничать или предать" между программами - стратегиями.

## Что где лежит?

В директории `programs` находятся файлы со стратегиями (на C++), структура данных и код, который будет проводить игру. 

В директории `programs_documentation` находятся субдиректории для каждой стратегии, а также для структуры данных. В этих субдиректориях находится документация. Для базовыхх стратегий ("Око за око", "Око за два ока", "Всегда да", "Всегда нет"), а также для структуры данных, также в субдиректориях находится код на Python, воспроизводящий эту стратегию.

В директории `scripts` находятся скрипты для автоматического парсинга всех стратегий и фотрматирования их для файла `programs/game.cpp`.

## Я хочу участвовать, что делать?

Прислать стратегию Николаеву Виктору в виде трёх файлов:
  + `{название стратегии}.cpp`
  + `{название стратегии}_en.md`
  + `{название стратегии}_ru.md`

В файле `{название стратегии}.cpp` должна содержаться функция вида `bool {название стратегии}(data_struct input_data)`. Она должна реализовывать саму стратегию (программа может быть также написана на Python).

В файлах `{название стратегии}_en.md` и `{название стратегии}_ru.md` должна содержаться документация к стратегии на английском и русском языках соответственно.

## Примеры

Примеры кода на C++ находятся в директории `programs`. Примеры кода на Python находятся в субдиректориях директории `programs_documentation`.

Примеры документации находятся в субдиректориях директории `programs_documentation`.
