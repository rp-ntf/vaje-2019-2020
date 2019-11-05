.PHONY: clean All

All:
	@echo "----------Building project:[ vaja4-8 - Debug ]----------"
	@cd "vaja4-8" && "$(MAKE)" -f  "vaja4-8.mk"
clean:
	@echo "----------Cleaning project:[ vaja4-8 - Debug ]----------"
	@cd "vaja4-8" && "$(MAKE)" -f  "vaja4-8.mk" clean
