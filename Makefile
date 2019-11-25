.PHONY: clean All

All:
	@echo "----------Building project:[ vaje6-dn-2 - Debug ]----------"
	@cd "vaje6-dn-2" && "$(MAKE)" -f  "vaje6-dn-2.mk"
clean:
	@echo "----------Cleaning project:[ vaje6-dn-2 - Debug ]----------"
	@cd "vaje6-dn-2" && "$(MAKE)" -f  "vaje6-dn-2.mk" clean
