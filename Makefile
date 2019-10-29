.PHONY: clean All

All:
	@echo "----------Building project:[ vaja3-1 - Debug ]----------"
	@cd "vaja3-1" && "$(MAKE)" -f  "vaja3-1.mk"
clean:
	@echo "----------Cleaning project:[ vaja3-1 - Debug ]----------"
	@cd "vaja3-1" && "$(MAKE)" -f  "vaja3-1.mk" clean
