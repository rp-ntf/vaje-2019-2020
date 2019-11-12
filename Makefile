.PHONY: clean All

All:
	@echo "----------Building project:[ vaja5-9 - Debug ]----------"
	@cd "vaja5-9" && "$(MAKE)" -f  "vaja5-9.mk"
clean:
	@echo "----------Cleaning project:[ vaja5-9 - Debug ]----------"
	@cd "vaja5-9" && "$(MAKE)" -f  "vaja5-9.mk" clean
