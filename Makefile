.PHONY: clean All

All:
	@echo "----------Building project:[ vaja12-6 - Debug ]----------"
	@cd "vaja12-6" && "$(MAKE)" -f  "vaja12-6.mk"
clean:
	@echo "----------Cleaning project:[ vaja12-6 - Debug ]----------"
	@cd "vaja12-6" && "$(MAKE)" -f  "vaja12-6.mk" clean
