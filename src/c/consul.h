/*
 * Copyright (c) 2018
 * IoTech Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#ifndef _EDGEX_CONSUL_H_
#define _EDGEX_CONSUL_H_ 1

#include "edgex/edgex.h"
#include "edgex/edgex_logging.h"
#include "edgex/error.h"

typedef struct edgex_service_endpoints edgex_service_endpoints;

bool edgex_consul_client_ping
(
  iot_logging_client * lc,
  edgex_service_endpoints * endpoints,
  edgex_error * err
);

edgex_nvpairs *edgex_consul_client_get_config
(
  iot_logging_client *lc,
  edgex_service_endpoints *endpoints,
  const char *servicename,
  const char *profile,
  edgex_error *err
);

void edgex_consul_client_write_config
(
  iot_logging_client *lc,
  edgex_service_endpoints *endpoints,
  const char *servicename,
  const char *profile,
  const edgex_nvpairs *config,
  edgex_error *err
);

void edgex_consul_client_register_service
(
  iot_logging_client *lc,
  edgex_service_endpoints *endpoints,
  const char *servicename,
  const char *host,
  int64_t port,
  const char *checkInterval,
  edgex_error *err
);

#endif
