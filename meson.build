project('ok', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++23'])


incl_dir = include_directories('include')

fmt_wrap = subproject('fmt')

fmt_dep = fmt_wrap.get_variable('fmt_dep')

srcs = [
	'src/main.cc',
	'src/common/bytecode.cc',
]

exe = executable('ok', srcs, include_directories : [incl_dir], dependencies : [fmt_dep])


