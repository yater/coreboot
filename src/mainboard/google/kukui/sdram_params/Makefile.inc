sdram-params :=
sdram-params += sdram-lpddr4x-H9HCNNNCPMALHR-4GB

$(foreach params,$(sdram-params), \
	$(eval cbfs-files-y += $(params)) \
	$(eval $(params)-file := $(params).c:struct) \
	$(eval $(params)-type := struct) \
	$(eval $(params)-compression := $(CBFS_COMPRESS_FLAG)) \
)
