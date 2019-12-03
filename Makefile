.PHONY: clean All

All:
	@echo "----------Building project:[ vaja8-1 - Debug ]----------"
	@cd "vaja8-1" && "$(MAKE)" -f  "vaja8-1.mk"
clean:
	@echo "----------Cleaning project:[ vaja8-1 - Debug ]----------"
	@cd "vaja8-1" && "$(MAKE)" -f  "vaja8-1.mk" clean
