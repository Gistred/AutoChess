
targetdirectory = "bin/%{cfg.buildcfg}/ChessEngine"
objectdirectory = "bin-int/%{cfg.buildcfg}/ChessEngine"

workspace "AutoChess"
   configurations { "Debug", "Release" }

   startproject "ChessEngineTest"

	flags "MultiProcessorCompile"

filter "configurations:Debug"
   defines { "DEBUG" }
   symbols "On"
filter ""

filter "configurations:Release"
   defines { "NDEBUG" }
   optimize "On"
filter ""


include("ChessEngine")

newaction {
   trigger     = "clean",
   description = "clean",
   execute     = function ()
      os.rmdir("./bin")
      os.rmdir("./bin-int")
      os.execute("find -name \"Makefile\" -delete -o -name \"*.make\" -delete")
   end
}

newaction {
        trigger     = "tests",
        description = "launch all tests",
        execute     = function ()
            os.execute("make")
            return os.execute('bash -c \'ChessEngine/bin/Debug/ChessEngine/ChessEngineTest\'')
        end
}