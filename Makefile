.PHONY: clean All

All:
	@echo "----------Building project:[ vaja3-dn-nal4 - Debug ]----------"
	@cd "vaja3-dn-nal4" && "$(MAKE)" -f  "vaja3-dn-nal4.mk"
clean:
	@echo "----------Cleaning project:[ vaja3-dn-nal4 - Debug ]----------"
	@cd "vaja3-dn-nal4" && "$(MAKE)" -f  "vaja3-dn-nal4.mk" clean
