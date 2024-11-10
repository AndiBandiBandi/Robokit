/*
 *  Copyright (c) 2018, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * This header file defines the OpenThread core configuration options used in NCP build for `toranj` test framework.
 *
 */

#if !defined(OPENTHREAD_CORE_TORANJ_CONFIG_SIMULATION_H_) && !defined(OPENTHREAD_CORE_TORANJ_CONFIG_POSIX_H_)
#error "This header file should only be included through the platform-specific one"
#endif

#ifndef OPENTHREAD_RADIO
#define OPENTHREAD_RADIO 0
#endif

#ifndef OPENTHREAD_RADIO
#define OPENTHREAD_RADIO_CLI 0
#endif

#define OPENTHREAD_CONFIG_REFERENCE_DEVICE_ENABLE 1

#define OPENTHREAD_CONFIG_UPTIME_ENABLE 1

#define OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE 1

#ifndef OPENTHREAD_CONFIG_BORDER_ROUTING_ENABLE
#define OPENTHREAD_CONFIG_BORDER_ROUTING_ENABLE 1
#endif

#define OPENTHREAD_CONFIG_NAT64_BORDER_ROUTING_ENABLE OPENTHREAD_CONFIG_BORDER_ROUTING_ENABLE

#define OPENTHREAD_CONFIG_BORDER_ROUTING_DHCP6_PD_ENABLE 1

#define OPENTHREAD_CONFIG_IP6_BR_COUNTERS_ENABLE 1

#define OPENTHREAD_CONFIG_TMF_NETDIAG_CLIENT_ENABLE 1

#define OPENTHREAD_CONFIG_MESH_DIAG_ENABLE 1

#define OPENTHREAD_CONFIG_BLE_TCAT_ENABLE 1

#define OPENTHREAD_CONFIG_COMMISSIONER_ENABLE 1

#define OPENTHREAD_CONFIG_COMMISSIONER_MAX_JOINER_ENTRIES 4

#define OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE 1

#define OPENTHREAD_CONFIG_BORDER_AGENT_EPHEMERAL_KEY_ENABLE 1

#define OPENTHREAD_CONFIG_BORDER_AGENT_ID_ENABLE 1

#define OPENTHREAD_CONFIG_DIAG_ENABLE 1

#define OPENTHREAD_CONFIG_JOINER_ENABLE 1

#define OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_ENABLE 1

#define OPENTHREAD_CONFIG_NETDATA_PUBLISHER_ENABLE 1

#define OPENTHREAD_CONFIG_TMF_ANYCAST_LOCATOR_ENABLE 1

#define OPENTHREAD_CONFIG_ECDSA_ENABLE 1

#define OPENTHREAD_CONFIG_JAM_DETECTION_ENABLE 1

#define OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS 256

#define OPENTHREAD_CONFIG_MESSAGE_USE_HEAP_ENABLE 0

#define OPENTHREAD_CONFIG_TMF_ADDRESS_CACHE_ENTRIES 16

#define OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_TIMEOUT 6

#define OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_INITIAL_RETRY_DELAY 4

#define OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_MAX_RETRY_DELAY 120

#define OPENTHREAD_CONFIG_TMF_ADDRESS_CACHE_MAX_SNOOP_ENTRIES 2

#define OPENTHREAD_CONFIG_TMF_SNOOP_CACHE_ENTRY_TIMEOUT 3

#define OPENTHREAD_CONFIG_MLE_DEVICE_PROPERTY_LEADER_WEIGHT_ENABLE 1

#define OPENTHREAD_CONFIG_MLE_MAX_CHILDREN 32

#define OPENTHREAD_CONFIG_MLE_CHILD_TIMEOUT_DEFAULT 120

#define OPENTHREAD_CONFIG_MLE_IP_ADDRS_PER_CHILD 10

#define OPENTHREAD_CONFIG_IP6_MAX_EXT_UCAST_ADDRS 8

#define OPENTHREAD_CONFIG_IP6_MAX_EXT_MCAST_ADDRS 4

#define OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE 1

#define OPENTHREAD_CONFIG_IP6_SLAAC_NUM_ADDRESSES 4

#define OPENTHREAD_CONFIG_IP6_SLAAC_DEPRECATION_INTERVAL 30

#define OPENTHREAD_CONFIG_MAC_FILTER_ENABLE 1

#define OPENTHREAD_CONFIG_MAC_FILTER_SIZE 80

#define OPENTHREAD_CONFIG_LOG_LEVEL OT_LOG_LEVEL_INFO

#define OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE 1

#define OPENTHREAD_CONFIG_LOG_PREPEND_UPTIME 1

#define OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL 1

#define OPENTHREAD_CONFIG_LOG_SUFFIX ""

#define OPENTHREAD_CONFIG_LOG_PLATFORM 1

#define OPENTHREAD_CONFIG_NCP_HDLC_ENABLE 1

#define OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE 4096

#define OPENTHREAD_CONFIG_MLE_STEERING_DATA_SET_OOB_ENABLE 1

#define OPENTHREAD_CONFIG_MLE_INFORM_PREVIOUS_PARENT_ON_REATTACH 1

#define OPENTHREAD_CONFIG_DATASET_UPDATER_ENABLE 1

#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_ENABLE 1

#define OPENTHREAD_CONFIG_CHANNEL_MONITOR_ENABLE 1

#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_MINIMUM_DELAY 2

#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_THRESHOLD_TO_SKIP_FAVORED (0xffff * 7 / 100)

#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_THRESHOLD_TO_CHANGE_CHANNEL (0xffff * 10 / 100)

// For `toranj` test script the value is decreased so that the tests can be run faster.
#define OPENTHREAD_CONFIG_TMF_PENDING_DATASET_MINIMUM_DELAY 1000
#define OPENTHREAD_CONFIG_TMF_PENDING_DATASET_DEFAULT_DELAY 1000

#define OPENTHREAD_CONFIG_NCP_ENABLE_MCU_POWER_STATE_CONTROL 1

#define OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE 1

#define OPENTHREAD_CONFIG_DNS_CLIENT_ENABLE 1

#define OPENTHREAD_CONFIG_SRP_CLIENT_ENABLE 1

#define OPENTHREAD_CONFIG_SRP_SERVER_ENABLE 1

#define OPENTHREAD_CONFIG_SRP_CLIENT_DOMAIN_NAME_API_ENABLE 1

#define OPENTHREAD_CONFIG_SRP_CLIENT_AUTO_START_DEFAULT_MODE 0

#define OPENTHREAD_CONFIG_HISTORY_TRACKER_ENABLE 1

#define OPENTHREAD_CONFIG_DNSSD_SERVER_ENABLE 1

#define OPENTHREAD_CONFIG_DELAY_AWARE_QUEUE_MANAGEMENT_ENABLE 1

#define OPENTHREAD_CONFIG_CLI_REGISTER_IP6_RECV_CALLBACK 1

#define OPENTHREAD_CONFIG_MLE_PARENT_RESPONSE_CALLBACK_API_ENABLE 1

#ifndef OPENTHREAD_CONFIG_NET_DIAG_VENDOR_NAME
#define OPENTHREAD_CONFIG_NET_DIAG_VENDOR_NAME "OpenThread by Google Nest"
#endif

#ifndef OPENTHREAD_CONFIG_NET_DIAG_VENDOR_MODEL
#define OPENTHREAD_CONFIG_NET_DIAG_VENDOR_MODEL "Toranj Simulation"
#endif

#ifndef OPENTHREAD_CONFIG_NET_DIAG_VENDOR_SW_VERSION
#define OPENTHREAD_CONFIG_NET_DIAG_VENDOR_SW_VERSION "OT-simul-toranj"
#endif

#define OPENTHREAD_CONFIG_NET_DIAG_VENDOR_INFO_SET_API_ENABLE OPENTHREAD_FTD

#if OPENTHREAD_RADIO

#define OPENTHREAD_CONFIG_MAC_SOFTWARE_ACK_TIMEOUT_ENABLE 1

#define OPENTHREAD_CONFIG_MAC_SOFTWARE_RETRANSMIT_ENABLE 1

#define OPENTHREAD_CONFIG_MAC_SOFTWARE_CSMA_BACKOFF_ENABLE 1

#define OPENTHREAD_CONFIG_MAC_SOFTWARE_TX_SECURITY_ENABLE 1

#define OPENTHREAD_CONFIG_MAC_SOFTWARE_TX_TIMING_ENABLE 1

#endif
