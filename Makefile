.PHONY: clean All

All:
	@echo "----------Building project:[ vaja9-2 - Debug ]----------"
	@cd "vaja9-2" && "$(MAKE)" -f  "vaja9-2.mk"
clean:
	@echo "----------Cleaning project:[ vaja9-2 - Debug ]----------"
	@cd "vaja9-2" && "$(MAKE)" -f  "vaja9-2.mk" clean
