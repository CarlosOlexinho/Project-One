CMAKE_MINIMUM_REQUIRED( VERSION 3.15 )
PROJECT( Project_One )

SET( CMAKE_CXX_STANDARD 14 )

ADD_EXECUTABLE(
		Project_One
		
		src/main.cpp
		
		src/interface/IUnit.hxx
		src/monster/Monster.cxx
		src/monster/Monster.hxx
)
