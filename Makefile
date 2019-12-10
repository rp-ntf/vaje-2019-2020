.PHONY: clean All

All:
	@echo "----------Building project:[ vaja9-1 - Debug ]----------"
	@cd "vaja9-1" && "$(MAKE)" -f  "vaja9-1.mk"
clean:
	@echo "----------Cleaning project:[ vaja9-1 - Debug ]----------"
	@cd "vaja9-1" && "$(MAKE)" -f  "vaja9-1.mk" clean
