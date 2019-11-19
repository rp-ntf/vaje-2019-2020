.PHONY: clean All

All:
	@echo "----------Building project:[ vaje6-1 - Debug ]----------"
	@cd "vaje6-1" && "$(MAKE)" -f  "vaje6-1.mk"
clean:
	@echo "----------Cleaning project:[ vaje6-1 - Debug ]----------"
	@cd "vaje6-1" && "$(MAKE)" -f  "vaje6-1.mk" clean
