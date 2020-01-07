.PHONY: clean All

All:
	@echo "----------Building project:[ vaja11-4 - Debug ]----------"
	@cd "vaja11-4" && "$(MAKE)" -f  "vaja11-4.mk"
clean:
	@echo "----------Cleaning project:[ vaja11-4 - Debug ]----------"
	@cd "vaja11-4" && "$(MAKE)" -f  "vaja11-4.mk" clean
