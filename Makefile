.PHONY: clean All

All:
	@echo "----------Building project:[ vaje6-6 - Debug ]----------"
	@cd "vaje6-6" && "$(MAKE)" -f  "vaje6-6.mk"
clean:
	@echo "----------Cleaning project:[ vaje6-6 - Debug ]----------"
	@cd "vaje6-6" && "$(MAKE)" -f  "vaje6-6.mk" clean
