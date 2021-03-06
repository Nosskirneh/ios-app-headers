//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_AdaptiveDiscoveryResult, GCKPB_CastNearbyAudioTokenResult, GCKPB_DeviceCacheStatistics, GCKPB_DeviceController, GCKPB_DeviceFilter, GCKPB_DiscoveredCastDevice, GCKPB_LocalNetworkId, GCKPB_MDNSSubtypeDiscoveryResult, GCKPB_MdnsResponseParseError, GCKPB_PBMutableArray, GCKPB_RemoteDisplayPluginMessage, GCKPB_SlowMDNSResponse, NSString;

@interface GCKPB_CastSdkEvent : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_AdaptiveDiscoveryResult *adaptiveDiscoveryResult; // @dynamic adaptiveDiscoveryResult;
@property(retain, nonatomic) GCKPB_CastNearbyAudioTokenResult *castNearbyAudioTokenResult; // @dynamic castNearbyAudioTokenResult;
@property(retain, nonatomic) GCKPB_PBMutableArray *configuredFlagsValuesArray; // @dynamic configuredFlagsValuesArray;
@property(retain, nonatomic) GCKPB_DeviceCacheStatistics *deviceCacheStatistics; // @dynamic deviceCacheStatistics;
@property(retain, nonatomic) GCKPB_DeviceController *deviceController; // @dynamic deviceController;
@property(retain, nonatomic) GCKPB_DeviceFilter *deviceFilter; // @dynamic deviceFilter;
@property(retain, nonatomic) NSString *deviceModelName; // @dynamic deviceModelName;
@property(retain, nonatomic) GCKPB_DiscoveredCastDevice *discoveredDevice; // @dynamic discoveredDevice;
@property(retain, nonatomic) GCKPB_PBMutableArray *discoveryRequestArray; // @dynamic discoveryRequestArray;
@property(retain, nonatomic) GCKPB_PBMutableArray *discoveryStatisticsArray; // @dynamic discoveryStatisticsArray;
@property(nonatomic) _Bool hasAdaptiveDiscoveryResult; // @dynamic hasAdaptiveDiscoveryResult;
@property(nonatomic) _Bool hasCastNearbyAudioTokenResult; // @dynamic hasCastNearbyAudioTokenResult;
@property(nonatomic) _Bool hasConfiguredFlagsValuesArray; // @dynamic hasConfiguredFlagsValuesArray;
@property(nonatomic) _Bool hasDeviceCacheStatistics; // @dynamic hasDeviceCacheStatistics;
@property(nonatomic) _Bool hasDeviceController; // @dynamic hasDeviceController;
@property(nonatomic) _Bool hasDeviceFilter; // @dynamic hasDeviceFilter;
@property(nonatomic) _Bool hasDeviceModelName; // @dynamic hasDeviceModelName;
@property(nonatomic) _Bool hasDiscoveredDevice; // @dynamic hasDiscoveredDevice;
@property(nonatomic) _Bool hasDiscoveryRequestArray; // @dynamic hasDiscoveryRequestArray;
@property(nonatomic) _Bool hasDiscoveryStatisticsArray; // @dynamic hasDiscoveryStatisticsArray;
@property(nonatomic) _Bool hasLocalNetworkId; // @dynamic hasLocalNetworkId;
@property(nonatomic) _Bool hasMdnsResponseParseError; // @dynamic hasMdnsResponseParseError;
@property(nonatomic) _Bool hasMdnsSubtypeDiscoveryResult; // @dynamic hasMdnsSubtypeDiscoveryResult;
@property(nonatomic) _Bool hasPublishedDevicesArray; // @dynamic hasPublishedDevicesArray;
@property(nonatomic) _Bool hasReceiverDeviceId; // @dynamic hasReceiverDeviceId;
@property(nonatomic) _Bool hasReceiverMetricsId; // @dynamic hasReceiverMetricsId;
@property(nonatomic) _Bool hasRemoteDisplayPluginData; // @dynamic hasRemoteDisplayPluginData;
@property(nonatomic) _Bool hasSenderId; // @dynamic hasSenderId;
@property(nonatomic) _Bool hasSenderLocalIpFragmentArray; // @dynamic hasSenderLocalIpFragmentArray;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSessionIdType; // @dynamic hasSessionIdType;
@property(nonatomic) _Bool hasSlowMdnsResponse; // @dynamic hasSlowMdnsResponse;
@property(retain, nonatomic) GCKPB_LocalNetworkId *localNetworkId; // @dynamic localNetworkId;
@property(retain, nonatomic) GCKPB_MdnsResponseParseError *mdnsResponseParseError; // @dynamic mdnsResponseParseError;
@property(retain, nonatomic) GCKPB_MDNSSubtypeDiscoveryResult *mdnsSubtypeDiscoveryResult; // @dynamic mdnsSubtypeDiscoveryResult;
@property(retain, nonatomic) GCKPB_PBMutableArray *publishedDevicesArray; // @dynamic publishedDevicesArray;
@property(nonatomic) long long receiverDeviceId; // @dynamic receiverDeviceId;
@property(retain, nonatomic) NSString *receiverMetricsId; // @dynamic receiverMetricsId;
@property(retain, nonatomic) GCKPB_RemoteDisplayPluginMessage *remoteDisplayPluginData; // @dynamic remoteDisplayPluginData;
@property(retain, nonatomic) NSString *senderId; // @dynamic senderId;
@property(retain, nonatomic) GCKPB_PBMutableArray *senderLocalIpFragmentArray; // @dynamic senderLocalIpFragmentArray;
@property(nonatomic) long long sessionId; // @dynamic sessionId;
@property(nonatomic) int sessionIdType; // @dynamic sessionIdType;
@property(retain, nonatomic) GCKPB_SlowMDNSResponse *slowMdnsResponse; // @dynamic slowMdnsResponse;

@end

