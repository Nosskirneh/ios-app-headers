//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface CSHMScreenshareSignals : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool accessibilityMode; // @dynamic accessibilityMode;
@property(nonatomic) _Bool backgroundDataOn; // @dynamic backgroundDataOn;
@property(nonatomic) int batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) _Bool hasAccessibilityMode; // @dynamic hasAccessibilityMode;
@property(nonatomic) _Bool hasBackgroundDataOn; // @dynamic hasBackgroundDataOn;
@property(nonatomic) _Bool hasBatteryLevel; // @dynamic hasBatteryLevel;
@property(nonatomic) _Bool hasNetworkMetered; // @dynamic hasNetworkMetered;
@property(nonatomic) _Bool hasNetworkVolteEnabled; // @dynamic hasNetworkVolteEnabled;
@property(nonatomic) _Bool hasPhoneType; // @dynamic hasPhoneType;
@property(nonatomic) _Bool hasRtcVersion; // @dynamic hasRtcVersion;
@property(nonatomic) _Bool hasTelephonyType; // @dynamic hasTelephonyType;
@property(nonatomic) _Bool hasUsingWifi; // @dynamic hasUsingWifi;
@property(nonatomic) _Bool hasWifiSignalStrength; // @dynamic hasWifiSignalStrength;
@property(nonatomic) _Bool networkMetered; // @dynamic networkMetered;
@property(nonatomic) _Bool networkVolteEnabled; // @dynamic networkVolteEnabled;
@property(nonatomic) int phoneType; // @dynamic phoneType;
@property(nonatomic) int rtcVersion; // @dynamic rtcVersion;
@property(nonatomic) int telephonyType; // @dynamic telephonyType;
@property(retain, nonatomic) GPBEnumArray *unsetSignalsArray; // @dynamic unsetSignalsArray;
@property(readonly, nonatomic) unsigned long long unsetSignalsArray_Count; // @dynamic unsetSignalsArray_Count;
@property(nonatomic) _Bool usingWifi; // @dynamic usingWifi;
@property(nonatomic) int wifiSignalStrength; // @dynamic wifiSignalStrength;

@end

