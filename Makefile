.PHONY: clean All

All:
	@echo "----------Building project:[ vaja2-1 - Debug ]----------"
	@cd "vaja2-1" && "$(MAKE)" -f  "vaja2-1.mk"
clean:
	@echo "----------Cleaning project:[ vaja2-1 - Debug ]----------"
	@cd "vaja2-1" && "$(MAKE)" -f  "vaja2-1.mk" clean
