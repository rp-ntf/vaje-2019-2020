.PHONY: clean All

All:
	@echo "----------Building project:[ vaja10-1 - Debug ]----------"
	@cd "vaja10-1" && "$(MAKE)" -f  "vaja10-1.mk"
clean:
	@echo "----------Cleaning project:[ vaja10-1 - Debug ]----------"
	@cd "vaja10-1" && "$(MAKE)" -f  "vaja10-1.mk" clean
