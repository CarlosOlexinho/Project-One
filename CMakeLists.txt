CMAKE_MINIMUM_REQUIRED( VERSION 3.15 )
PROJECT( Project_One )

SET( CMAKE_CXX_STANDARD 14 )

ADD_EXECUTABLE(
		Project_One
		
		src/main.cpp
		
		src/interface/IUnit.hxx
		src/monster/Monster.cxx
		src/monster/Monster.hxx
		src/humanoid/Humanoid.cxx
		src/humanoid/Humanoid.hxx
		src/SimpleUnit.cxx
		src/SimpleUnit.hxx
		src/humanoid/type/Elf.cxx
		src/humanoid/type/Elf.hxx src/monster/type/Phoenix.cxx src/monster/type/Phoenix.hxx )
