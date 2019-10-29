.PHONY: clean All

All:
	@echo "----------Building project:[ vaja3-4 - Debug ]----------"
	@cd "vaja3-4" && "$(MAKE)" -f  "vaja3-4.mk"
clean:
	@echo "----------Cleaning project:[ vaja3-4 - Debug ]----------"
	@cd "vaja3-4" && "$(MAKE)" -f  "vaja3-4.mk" clean
