.PHONY: clean All

All:
	@echo "----------Building project:[ vaja2-dn2 - Debug ]----------"
	@cd "vaja2-dn2" && "$(MAKE)" -f  "vaja2-dn2.mk"
clean:
	@echo "----------Cleaning project:[ vaja2-dn2 - Debug ]----------"
	@cd "vaja2-dn2" && "$(MAKE)" -f  "vaja2-dn2.mk" clean
