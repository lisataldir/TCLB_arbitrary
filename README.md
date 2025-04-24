# TCLB_arbitrary

Branch of TCLB where the average handler is implemented for arbitrary lattice.  
The configuration and compilation stay the same as the official version and is recalled below.

## Configuration

```bash
$ make configure
$ ./configure
```

## Usage on arbitrary lattice

```bash
$ make d3q27_cumulant_AVG
$ CLB/d3q27_cumulant_AVG/main example/flow/3d/cummulant_test.xml . @toArb = true
$ CLB/d3q27_cumulant_AVG/main cummulant_test_ARB_P00.xml
```
