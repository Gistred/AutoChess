targetdirectory = "bin/%{cfg.buildcfg}/ChessEngine"
objectdirectory = "bin-int/%{cfg.buildcfg}/ChessEngine"

project "ChessEngine"
   kind "StaticLib"
   language "C++"
   cppdialect "C++20"
   print("target2" .. targetdirectory)
   
   targetdir (targetdirectory)
   objdir    (objectdirectory)
   

   files { "src/**.h", "src/**.cpp" }

project "ChessEngineTest"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"

    targetdir (targetdirectory)
    objdir    (objectdirectory)

    files { "tests/**.h", "tests/**.cpp",
        "../Dependencies/googletest/googletest/**.h",
        "../Dependencies/googletest/googletest/**.hpp",
        "../Dependencies/googletest/googletest/src/gtest-all.cc"
    }

    
    includedirs {
        "../Dependencies/googletest/googletest/include",
        "../Dependencies/googletest/googletest"
    }

    links { "ChessEngine" }



    