# Vendor Interoperability

When communicating with other DDS vendors, the following settings enable compliance with the DDS-XTYPES specification.

## All Vendors — XTYPES Compliance Mask

The `NDDS_XTYPES_COMPLIANCE_MASK` environment variable configures RTI Connext to use DDS specification-compliant behavior for type compatibility:

```bash
export NDDS_XTYPES_COMPLIANCE_MASK=0x000001a9
```

This mask enables several interoperability flags:
- Comply with DDS-XTYPES 1.3 specification serialization rules
- Enable strict type validation for cross-vendor communication

The Python start scripts (`start_autopilot.sh`, `start_globalvector_consumer.sh`) include this line commented out — uncomment it when interoperating with other vendors.

This can also be done programmatically if necessary for a specific endpoint. See [RTI Connext XTYPES Compliance Documentation](https://community.rti.com/static/documentation/connext-dds/7.3.0/doc/manuals/connext_dds_professional/extensible_types_guide/extensible_types/Data_Representation.htm#ComplianceMask) for full details on mask values and API usage.

## Cyclone DDS

To ensure interoperability with Eclipse Cyclone DDS, the `CycloneInterop` QoS profile in `qos/umaa_qos_lib.xml` is provided as a convenience.

### Data Representation

- **Eclipse Cyclone DDS** uses XCDR2 serialization by default
- **RTI Connext** determines the serialization format based on the data type's extensibility kind (XCDR for final types, XCDR2 for appendable/mutable types)

`CycloneInterop` configures DataReaders to accept both XCDR and XCDR2 data representations:

```xml
<datareader_qos>
  <representation>
    <value>
      <element>XCDR_DATA_REPRESENTATION</element>
      <element>XCDR2_DATA_REPRESENTATION</element>
    </value>
  </representation>
</datareader_qos>
```

This ensures readers can receive data from writers using either serialization format.

See [RTI Connext DATA_REPRESENTATION QoS Documentation](https://community.rti.com/static/documentation/connext-dds/current/doc/manuals/connext_dds_professional/users_manual/users_manual/DATAREPRESENTATION_Qos.htm) for more details.

### Serialize Key with Dispose

RTI Connext uses a key hash for instance handles. When a dispose message is the first message received for a given instance, the receiver may not have the key values needed to identify it. `CycloneInterop` configures DataWriters to serialize the key value alongside dispose messages so that receivers (including Cyclone DDS) can correctly identify the instance:

```xml
<datawriter_qos>
  <protocol>
    <serialize_key_with_dispose>true</serialize_key_with_dispose>
  </protocol>
</datawriter_qos>
```

This ensures cross-vendor dispose handling works correctly for keyed topics.

### Type Extensibility Kind

The default type extensibility in Cyclone DDS is `@final` instead of `@appendable`, which is the default according to the DDS-XTYPES specification. This mismatch may cause deserialization errors in Connext applications. It is recommended to explicitly set `@appendable` on the Cyclone side to align with the standard.

## Using `CycloneInterop` in Python

To apply the Cyclone interoperability profile in your Python component, inherit from or compose with the `CycloneInterop` profile in your QoS XML. Since the SDK uses `AssignerQoS` by default, you can layer the profile on top by setting it as the base for your custom QoS:

```xml
<qos_profile name="MyCycloneProfile" base_name="UMAAQoSLib::CycloneInterop">
    <!-- Additional QoS overrides here -->
</qos_profile>
```

Alternatively, set the compliance mask environment variable before launching your application:

```bash
export NDDS_XTYPES_COMPLIANCE_MASK=0x000001a9
./start_autopilot.sh --domain-id 0
```
