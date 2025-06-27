# TCLB_arbitrary

Branch of [TCLB](https://github.com/CFD-GO/TCLB) where the average, sampler and IB handlers are implemented for arbitrary lattice.  
The configuration and compilation stay the same as the official version and is recalled below.

## Configuration

```bash
$ make configure
$ ./configure
```

## Usage on arbitrary lattice

Some examples for each handler are given below. To see more example of xml file, see [here](https://github.com/CFD-GO/TCLB/tree/master/example).

### <Average/>

The purpose of the Average handler is to reset the average values (such as averageP, avgU, etc.). 

```bash
$ make d3q27_cumulant_AVG
$ CLB/d3q27_cumulant_AVG/main example/average_trial.xml . @toArb = true
$ CLB/d3q27_cumulant_AVG/main average_trial_ARB_P00.xml
```

### <Sample/>

The purpose of the Sample handler is to extract one or several quantities values for a given point.

```bash
$ make d3q27_cumulant
$ CLB/d3q27_cumulant/main example/sample_trial.xml . @toArb = true
$ CLB/d3q27_cumulant/main sample_trial_ARB_P00.xml
```

### <IB/>

Finally, the purpose of the IB handler is to compute the cut-distances.

```bash
$ make d3q27_cumulant_IB
$ CLB/d3q27_cumulant_IB/main example/ib_trial.xml . @toArb = true
$ CLB/d3q27_cumulant_IB/main ib_trial_ARB_P00.xml
```

