.PHONY: clean All

All:
	@echo "----------Building project:[ vaja7-4 - Debug ]----------"
	@cd "vaja7-4" && "$(MAKE)" -f  "vaja7-4.mk"
clean:
	@echo "----------Cleaning project:[ vaja7-4 - Debug ]----------"
	@cd "vaja7-4" && "$(MAKE)" -f  "vaja7-4.mk" clean
