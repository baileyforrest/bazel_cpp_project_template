import subprocess

def Settings( **kwargs ):
  flags = [
    '-x', 'c++',
    '-Wall', '-Wextra', '-Wno-unused-parameter',
    '-std=c++0x',

    '-I', '.',

    '-I', 'third_party/googletest/googletest/include',
    '-I', 'third_party/abseil-cpp',
    '-I', 'third_party/libbcf',
  ]

  return {
    'flags': flags,
  }
