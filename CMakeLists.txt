CMAKE_MINIMUM_REQUIRED( VERSION 3.15 )
PROJECT( Project_One )

SET( CMAKE_CXX_STANDARD 14 )

ADD_EXECUTABLE( Project_One
				src/main.cpp src/modules/calculator/SimpleCalculator.cxx src/modules/calculator/SimpleCalculator.hxx src/modules/interface/ICalculator.hxx src/modules/interface/IYieldValue.hxx src/modules/interface/IRocketLauncher.hxx src/modules/RocketLauncher/RocketLauncher.cxx src/modules/RocketLauncher/RocketLauncher.hxx src/modules/YieldValue.cxx src/modules/YieldValue.hxx)
