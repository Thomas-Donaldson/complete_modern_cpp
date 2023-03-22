project('complete_modern_cpp', 'cpp')

catch2_dep = subproject('catch2').get_variable('catch2_with_main_dep')

incldir = include_directories('./include')

s2a1_files = files('./tests/s2a1_tests.cpp', './lib/s2a1.cpp')
s2a2_files = files('./tests/s2a2_tests.cpp', './lib/s2a2.cpp')

executable('s2a1',
	s2a1_files,
	include_directories : incldir,
	dependencies : catch2_dep)

executable('s2a2',
	s2a2_files,
	include_directories : incldir,
	dependencies : catch2_dep)