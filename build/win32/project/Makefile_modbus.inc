!IF "$(MODBINCDIR)" != "" && "$(MODBLIBDIR)" != ""
CFLAGS = 	$(CFLAGS) /DHAVE_LIBMODBUS /DHAVE_LIBMODBUS_3_1
MODBLIB =	$(MODBLIBDIR)\modbus.lib
LIBS = 		$(LIBS) "$(MODBLIB)"
INCS =		$(INCS) /I "$(MODBINCDIR)"
!ENDIF
