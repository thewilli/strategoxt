DEFS = \
  test1.sdf \
  test1-correct.sdf \
  sdf-cons-injections.sdf \
  sdf-cons-injections-correct.sdf

check_DATA = $(DEFS:.sdf=.sdf.af)
CLEANFILES  = $(check_DATA)
EXTRA_DIST  = $(DEFS)

%.sdf.af : %.sdf
	$(SDF_FRONT)/bin/parse-sdf-definition -i $< -o $@
