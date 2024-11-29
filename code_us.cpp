{
    "containers": {
        "cna": {
            "affected": [
                {
                    "product": "n/a",
                    "vendor": "n/a",
                    "versions": [
                        {
                            "status": "affected",
                            "version": "n/a"
                        }
                    ]
                }
            ],
            "datePublic": "2000-12-12T00:00:00",
            "descriptions": [
                {
                    "lang": "en",
                    "value": "Buffer overflow in AOL Instant Messenger (AIM) before 4.3.2229 allows remote attackers to execute arbitrary commands via a \"buddyicon\" command with a long \"src\" argument."
                }
            ],
            "problemTypes": [
                {
                    "descriptions": [
                        {
                            "description": "n/a",
                            "lang": "en",
                            "type": "text"
                        }
                    ]
                }
            ],
            "providerMetadata": {
                "dateUpdated": "2004-09-02T09:00:00",
                "orgId": "8254265b-2729-46b6-b9e3-3dfca2d5bfca",
                "shortName": "mitre"
            },
            "references": [
                {
                    "name": "A121200-1",
                    "tags": [
                        "vendor-advisory",
                        "x_refsource_ATSTAKE"
                    ],
                    "url": "http://www.atstake.com/research/advisories/2000/a121200-1.txt"
                },
                {
                    "name": "1692",
                    "tags": [
                        "vdb-entry",
                        "x_refsource_OSVDB"
                    ],
                    "url": "http://www.osvdb.org/1692"
                },
                {
                    "name": "20001214 Re: AIM & @stake's advisory",
                    "tags": [
                        "mailing-list",
                        "x_refsource_BUGTRAQ"
                    ],
                    "url": "http://marc.info/?l=bugtraq&m=97683774417132&w=2"
                },
                {
                    "name": "20001213 Administrivia & AOL IM Advisory",
                    "tags": [
                        "mailing-list",
                        "x_refsource_BUGTRAQ"
                    ],
                    "url": "http://marc.info/?l=bugtraq&m=97668265628917&w=2"
                }
            ],
            "x_legacyV4Record": {
                "CVE_data_meta": {
                    "ASSIGNER": "cve@mitre.org",
                    "ID": "CVE-2000-1094",
                    "STATE": "PUBLIC"
                },
                "affects": {
                    "vendor": {
                        "vendor_data": [
                            {
                                "product": {
                                    "product_data": [
                                        {
                                            "product_name": "n/a",
                                            "version": {
                                                "version_data": [
                                                    {
                                                        "version_value": "n/a"
                                                    }
                                                ]
                                            }
                                        }
                                    ]
                                },
                                "vendor_name": "n/a"
                            }
                        ]
                    }
                },
                "data_format": "MITRE",
                "data_type": "CVE",
                "data_version": "4.0",
                "description": {
                    "description_data": [
                        {
                            "lang": "eng",
                            "value": "Buffer overflow in AOL Instant Messenger (AIM) before 4.3.2229 allows remote attackers to execute arbitrary commands via a \"buddyicon\" command with a long \"src\" argument."
                        }
                    ]
                },
                "problemtype": {
                    "problemtype_data": [
                        {
                            "description": [
                                {
                                    "lang": "eng",
                                    "value": "n/a"
                                }
                            ]
                        }
                    ]
                },
                "references": {
                    "reference_data": [
                        {
                            "name": "A121200-1",
                            "refsource": "ATSTAKE",
                            "url": "http://www.atstake.com/research/advisories/2000/a121200-1.txt"
                        },
                        {
                            "name": "1692",
                            "refsource": "OSVDB",
                            "url": "http://www.osvdb.org/1692"
                        },
                        {
                            "name": "20001214 Re: AIM & @stake's advisory",
                            "refsource": "BUGTRAQ",
                            "url": "http://marc.info/?l=bugtraq&m=97683774417132&w=2"
                        },
                        {
                            "name": "20001213 Administrivia & AOL IM Advisory",
                            "refsource": "BUGTRAQ",
                            "url": "http://marc.info/?l=bugtraq&m=97668265628917&w=2"
                        }
                    ]
                }
            }
        },
        "adp": [
            {
                "providerMetadata": {
                    "orgId": "af854a3a-2127-422b-91ae-364da2661108",
                    "shortName": "CVE",
                    "dateUpdated": "2024-08-08T05:45:36.602Z"
                },
                "title": "CVE Program Container",
                "references": [
                    {
                        "name": "A121200-1",
                        "tags": [
                            "vendor-advisory",
                            "x_refsource_ATSTAKE",
                            "x_transferred"
                        ],
                        "url": "http://www.atstake.com/research/advisories/2000/a121200-1.txt"
                    },
                    {
                        "name": "1692",
                        "tags": [
                            "vdb-entry",
                            "x_refsource_OSVDB",
                            "x_transferred"
                        ],
                        "url": "http://www.osvdb.org/1692"
                    },
                    {
                        "name": "20001214 Re: AIM & @stake's advisory",
                        "tags": [
                            "mailing-list",
                            "x_refsource_BUGTRAQ",
                            "x_transferred"
                        ],
                        "url": "http://marc.info/?l=bugtraq&m=97683774417132&w=2"
                    },
                    {
                        "name": "20001213 Administrivia & AOL IM Advisory",
                        "tags": [
                            "mailing-list",
                            "x_refsource_BUGTRAQ",
                            "x_transferred"
                        ],
                        "url": "http://marc.info/?l=bugtraq&m=97668265628917&w=2"
                    }
                ]
            }
        ]
    },
    "cveMetadata": {
        "assignerOrgId": "8254265b-2729-46b6-b9e3-3dfca2d5bfca",
        "assignerShortName": "mitre",
        "cveId": "CVE-2000-1094",
        "datePublished": "2001-01-22T05:00:00",
        "dateReserved": "2000-12-12T00:00:00",
        "dateUpdated": "2024-08-08T05:45:36.602Z",
        "state": "PUBLISHED"
    },
    "dataType": "CVE_RECORD",
    "dataVersion": "5.1"
}