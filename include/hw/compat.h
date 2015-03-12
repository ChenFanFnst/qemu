#ifndef HW_COMPAT_H
#define HW_COMPAT_H

#define HW_COMPAT_2_2 PC_I440FX_COMPAT

#define PC_I440FX_COMPAT \
        {\
            .driver   = "vfio-pci",\
            .property = "x-aer",\
            .value    = "off",\
        }

#define HW_COMPAT_2_1 \
        HW_COMPAT_2_2, \
        {\
            .driver   = "intel-hda",\
            .property = "old_msi_addr",\
            .value    = "on",\
        },{\
            .driver   = "VGA",\
            .property = "qemu-extended-regs",\
            .value    = "off",\
        },{\
            .driver   = "secondary-vga",\
            .property = "qemu-extended-regs",\
            .value    = "off",\
        },{\
            .driver   = "virtio-scsi-pci",\
            .property = "any_layout",\
            .value    = "off",\
        },{\
            .driver   = "usb-mouse",\
            .property = "usb_version",\
            .value    = stringify(1),\
        },{\
            .driver   = "usb-kbd",\
            .property = "usb_version",\
            .value    = stringify(1),\
        },{\
            .driver   = "virtio-pci",\
            .property = "virtio-pci-bus-master-bug-migration",\
            .value    = "on",\
        }

#endif /* HW_COMPAT_H */
