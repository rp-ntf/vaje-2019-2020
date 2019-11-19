.PHONY: clean All

All:
	@echo "----------Building project:[ vaje6-3 - Debug ]----------"
	@cd "vaje6-3" && "$(MAKE)" -f  "vaje6-3.mk"
clean:
	@echo "----------Cleaning project:[ vaje6-3 - Debug ]----------"
	@cd "vaje6-3" && "$(MAKE)" -f  "vaje6-3.mk" clean
