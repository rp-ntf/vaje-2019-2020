.PHONY: clean All

All:
	@echo "----------Building project:[ vaja10-2 - Debug ]----------"
	@cd "vaja10-2" && "$(MAKE)" -f  "vaja10-2.mk"
clean:
	@echo "----------Cleaning project:[ vaja10-2 - Debug ]----------"
	@cd "vaja10-2" && "$(MAKE)" -f  "vaja10-2.mk" clean
