import os

def list_subdirs(directory):
    subdirs = [d for d in os.listdir(directory) if os.path.isdir(os.path.join(directory, d))]
    return subdirs

def format_as_map(subdirs):
    res = "map<string, function<bool(data_struct)>> functions = {\n\t"
    for i in subdirs:
        if i != "data_struct":
            res += f'"{i}": {i},\n\t'
    return res[:-1] + '}'

def format_to_include(subdirs):
    res = ""
    for i in subdirs:
        if i != data_struct:
            res += f'#include "{i}.cpp"'
        else:
            res += f'#include "{i}.h"'

a = list_subdirs(input())
print(format_as_map(a))
print()
print(format_to_include(a))
