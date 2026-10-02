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

For QoS files with different library or profile names, override both profiles:

```bash
PYTHONPATH=. python -m examples.reference_components.run_component weather \
	--domain-id 1 \
	--qos-profile umaa_qos_lib::topic_qos_assign \
	--participant-qos-profile umaa_qos_lib::default_participant
```

The defaults remain `UMAAQoSLib::AssignerQoS` and
`UMAAQoSLib::DefaultUMAAParticipant`.

## Synthetic Reports

Add `--simulate` to publish synthetic reports for a bounded duration:

```bash
PYTHONPATH=. python -m examples.reference_components.run_component weather \
	--simulate --duration 60 --interval 1 --seed 42
```

The profile overrides above can be combined with these options. The default
duration is 60 seconds and the interval is one second. A seed makes generated
values reproducible; source GUIDs and timestamps still vary unless configured.

Five components publish random log entries. Navigation also publishes speed,
water environment publishes current, and weather publishes wind. Logging is
consumer-only. Simulation polls the declared report readers and prints
per-topic write and receive counts before shutdown. It does not issue commands
or simulate mission execution, collision avoidance, or other report types.
Run the components concurrently to exchange reports. Discovery and best-effort
delivery can cause receive counts to be lower than write counts.