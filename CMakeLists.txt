CMAKE_MINIMUM_REQUIRED( VERSION 3.15 )
PROJECT( Project_One )

SET( CMAKE_CXX_STANDARD 14 )

ADD_EXECUTABLE(
		Project_One
		
		src/main.cpp
		
		# Interfaces
		src/interface/ICalculator.hxx
		src/interface/IYieldValue.hxx
		src/interface/IRocketLauncher.hxx
		
		# Headers
		src/modules/calculator/SimpleCalculator.hxx
		src/modules/RocketLauncher/RocketLauncher.hxx
		
		# Sources
		src/modules/calculator/SimpleCalculator.cxx
		src/modules/RocketLauncher/RocketLauncher.cxx
        src/modules/Fibonacci/Fibonacci.cxx src/modules/Fibonacci/Fibonacci.hxx src/modules/GoldenNumber/GoldenNumber.cxx src/modules/GoldenNumber/GoldenNumber.hxx src/modules/WeirdCalculator/WeirdCalculator.cxx src/modules/WeirdCalculator/WeirdCalculator.hxx)
