.PHONY: clean All

All:
	@echo "----------Building project:[ vaja7-dn - Debug ]----------"
	@cd "vaja7-dn" && "$(MAKE)" -f  "vaja7-dn.mk"
clean:
	@echo "----------Cleaning project:[ vaja7-dn - Debug ]----------"
	@cd "vaja7-dn" && "$(MAKE)" -f  "vaja7-dn.mk" clean
