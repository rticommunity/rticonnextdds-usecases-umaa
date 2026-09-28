# Discovery-Only Reference Components

These six Python applications instantiate the UMAA services listed for the
USV reference components in Component Definitions v1.0. They intentionally
perform no application work: no reports are published and no commands are
processed beyond creating the DDS endpoints required for discovery.

Run one component after configuring `UMAA_QOS_FILE` and `RTI_LICENSE_FILE`:

```bash
cd python
source .venv/bin/activate
PYTHONPATH=. python -m examples.reference_components.run_component weather
```

Available applications are `colregs-hazard-avoidance`, `logging`,
`mission-executor`, `usv-navigation`, `water-environment`, and `weather`.