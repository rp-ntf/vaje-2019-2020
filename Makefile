.PHONY: clean All

All:
	@echo "----------Building project:[ vaja5-dn-2 - Debug ]----------"
	@cd "vaja5-dn-2" && "$(MAKE)" -f  "vaja5-dn-2.mk"
clean:
	@echo "----------Cleaning project:[ vaja5-dn-2 - Debug ]----------"
	@cd "vaja5-dn-2" && "$(MAKE)" -f  "vaja5-dn-2.mk" clean
