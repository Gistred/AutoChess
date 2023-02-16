# Alternative GNU Make workspace makefile autogenerated by Premake

ifndef config
  config=debug
endif

ifndef verbose
  SILENT = @
endif

ifeq ($(config),debug)
  ChessEngine_config = debug
  ChessEngineTest_config = debug

else ifeq ($(config),release)
  ChessEngine_config = release
  ChessEngineTest_config = release

else
  $(error "invalid configuration $(config)")
endif

PROJECTS := ChessEngine ChessEngineTest

.PHONY: all clean help $(PROJECTS) 

all: $(PROJECTS)

ChessEngine:
ifneq (,$(ChessEngine_config))
	@echo "==== Building ChessEngine ($(ChessEngine_config)) ===="
	@${MAKE} --no-print-directory -C ChessEngine -f ChessEngine.make config=$(ChessEngine_config)
endif

ChessEngineTest: ChessEngine
ifneq (,$(ChessEngineTest_config))
	@echo "==== Building ChessEngineTest ($(ChessEngineTest_config)) ===="
	@${MAKE} --no-print-directory -C ChessEngine -f ChessEngineTest.make config=$(ChessEngineTest_config)
endif

clean:
	@${MAKE} --no-print-directory -C ChessEngine -f ChessEngine.make clean
	@${MAKE} --no-print-directory -C ChessEngine -f ChessEngineTest.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "  debug"
	@echo "  release"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   ChessEngine"
	@echo "   ChessEngineTest"
	@echo ""
	@echo "For more information, see https://github.com/premake/premake-core/wiki"