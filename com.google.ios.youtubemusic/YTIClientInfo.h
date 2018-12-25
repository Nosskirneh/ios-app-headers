//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString, YTIConfigGroupsClientInfo, YTIKidsAppInfo, YTILocationInfo, YTIMusicAppInfo, YTISpacecastClientInfo, YTIUnpluggedAppInfo, YTIUnpluggedLocationInfo;

@interface YTIClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *acceptLanguage; // @dynamic acceptLanguage;
@property(copy, nonatomic) NSString *acceptRegion; // @dynamic acceptRegion;
@property(nonatomic) int androidSdkVersion; // @dynamic androidSdkVersion;
@property(nonatomic) _Bool animatedWebpSupport; // @dynamic animatedWebpSupport;
@property(nonatomic) int applicationState; // @dynamic applicationState;
@property(nonatomic) int cameraType; // @dynamic cameraType;
@property(copy, nonatomic) NSString *carrierGeo; // @dynamic carrierGeo;
@property(nonatomic) int clientFormFactor; // @dynamic clientFormFactor;
@property(nonatomic) int clientName; // @dynamic clientName;
@property(nonatomic) int clientScreen; // @dynamic clientScreen;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(copy, nonatomic) NSString *configData; // @dynamic configData;
@property(retain, nonatomic) YTIConfigGroupsClientInfo *configInfo; // @dynamic configInfo;
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(copy, nonatomic) NSString *contentSizeCategory; // @dynamic contentSizeCategory;
@property(nonatomic) _Bool crackedHl; // @dynamic crackedHl;
@property(copy, nonatomic) NSString *debugDeviceIdOverride; // @dynamic debugDeviceIdOverride;
@property(copy, nonatomic) NSString *deviceMake; // @dynamic deviceMake;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) GPBInt32Array *experimentIdsArray; // @dynamic experimentIdsArray;
@property(readonly, nonatomic) unsigned long long experimentIdsArray_Count; // @dynamic experimentIdsArray_Count;
@property(copy, nonatomic) NSString *experimentsToken; // @dynamic experimentsToken;
@property(retain, nonatomic) GPBInt32Array *firstTimeSignInExperimentIdsArray; // @dynamic firstTimeSignInExperimentIdsArray;
@property(readonly, nonatomic) unsigned long long firstTimeSignInExperimentIdsArray_Count; // @dynamic firstTimeSignInExperimentIdsArray_Count;
@property(nonatomic) float fontScale; // @dynamic fontScale;
@property(copy, nonatomic) NSString *gl; // @dynamic gl;
@property(nonatomic) int gmscoreVersionCode; // @dynamic gmscoreVersionCode;
@property(nonatomic) _Bool hasAcceptLanguage; // @dynamic hasAcceptLanguage;
@property(nonatomic) _Bool hasAcceptRegion; // @dynamic hasAcceptRegion;
@property(nonatomic) _Bool hasAndroidSdkVersion; // @dynamic hasAndroidSdkVersion;
@property(nonatomic) _Bool hasAnimatedWebpSupport; // @dynamic hasAnimatedWebpSupport;
@property(nonatomic) _Bool hasApplicationState; // @dynamic hasApplicationState;
@property(nonatomic) _Bool hasCameraType; // @dynamic hasCameraType;
@property(nonatomic) _Bool hasCarrierGeo; // @dynamic hasCarrierGeo;
@property(nonatomic) _Bool hasClientFormFactor; // @dynamic hasClientFormFactor;
@property(nonatomic) _Bool hasClientName; // @dynamic hasClientName;
@property(nonatomic) _Bool hasClientScreen; // @dynamic hasClientScreen;
@property(nonatomic) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(nonatomic) _Bool hasConfigData; // @dynamic hasConfigData;
@property(nonatomic) _Bool hasConfigInfo; // @dynamic hasConfigInfo;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasContentSizeCategory; // @dynamic hasContentSizeCategory;
@property(nonatomic) _Bool hasCrackedHl; // @dynamic hasCrackedHl;
@property(nonatomic) _Bool hasDebugDeviceIdOverride; // @dynamic hasDebugDeviceIdOverride;
@property(nonatomic) _Bool hasDeviceMake; // @dynamic hasDeviceMake;
@property(nonatomic) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(nonatomic) _Bool hasExperimentsToken; // @dynamic hasExperimentsToken;
@property(nonatomic) _Bool hasFontScale; // @dynamic hasFontScale;
@property(nonatomic) _Bool hasGl; // @dynamic hasGl;
@property(nonatomic) _Bool hasGmscoreVersionCode; // @dynamic hasGmscoreVersionCode;
@property(nonatomic) _Bool hasHl; // @dynamic hasHl;
@property(nonatomic) _Bool hasInternalGeo; // @dynamic hasInternalGeo;
@property(nonatomic) _Bool hasInternalGeoIp; // @dynamic hasInternalGeoIp;
@property(nonatomic) _Bool hasKidsAppInfo; // @dynamic hasKidsAppInfo;
@property(nonatomic) _Bool hasLocationInfo; // @dynamic hasLocationInfo;
@property(nonatomic) _Bool hasMusicAppInfo; // @dynamic hasMusicAppInfo;
@property(nonatomic) _Bool hasMwebUi; // @dynamic hasMwebUi;
@property(nonatomic) _Bool hasOsName; // @dynamic hasOsName;
@property(nonatomic) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(nonatomic) _Bool hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) _Bool hasPlayerType; // @dynamic hasPlayerType;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(nonatomic) _Bool hasRawDeviceId; // @dynamic hasRawDeviceId;
@property(nonatomic) _Bool hasScreenDensityFloat; // @dynamic hasScreenDensityFloat;
@property(nonatomic) _Bool hasScreenHeightInches; // @dynamic hasScreenHeightInches;
@property(nonatomic) _Bool hasScreenHeightPoints; // @dynamic hasScreenHeightPoints;
@property(nonatomic) _Bool hasScreenPixelDensity; // @dynamic hasScreenPixelDensity;
@property(nonatomic) _Bool hasScreenWidthInches; // @dynamic hasScreenWidthInches;
@property(nonatomic) _Bool hasScreenWidthPoints; // @dynamic hasScreenWidthPoints;
@property(nonatomic) _Bool hasSpacecastClientInfo; // @dynamic hasSpacecastClientInfo;
@property(nonatomic) _Bool hasSpacecastToken; // @dynamic hasSpacecastToken;
@property(nonatomic) _Bool hasTheme; // @dynamic hasTheme;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(nonatomic) _Bool hasUnpluggedAppInfo; // @dynamic hasUnpluggedAppInfo;
@property(nonatomic) _Bool hasUnpluggedLocationInfo; // @dynamic hasUnpluggedLocationInfo;
@property(nonatomic) _Bool hasUserInterfaceTheme; // @dynamic hasUserInterfaceTheme;
@property(nonatomic) _Bool hasUtcOffsetMinutes; // @dynamic hasUtcOffsetMinutes;
@property(nonatomic) _Bool hasWebpSupport; // @dynamic hasWebpSupport;
@property(nonatomic) _Bool hasWindowHeightPoints; // @dynamic hasWindowHeightPoints;
@property(nonatomic) _Bool hasWindowWidthPoints; // @dynamic hasWindowWidthPoints;
@property(copy, nonatomic) NSString *hl; // @dynamic hl;
@property(copy, nonatomic) NSString *internalGeo; // @dynamic internalGeo;
@property(copy, nonatomic) NSString *internalGeoIp; // @dynamic internalGeoIp;
@property(retain, nonatomic) YTIKidsAppInfo *kidsAppInfo; // @dynamic kidsAppInfo;
@property(retain, nonatomic) YTILocationInfo *locationInfo; // @dynamic locationInfo;
@property(retain, nonatomic) YTIMusicAppInfo *musicAppInfo; // @dynamic musicAppInfo;
@property(nonatomic) int mwebUi; // @dynamic mwebUi;
@property(copy, nonatomic) NSString *osName; // @dynamic osName;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) int platform; // @dynamic platform;
@property(nonatomic) int playerType; // @dynamic playerType;
@property(copy, nonatomic) NSString *projectId; // @dynamic projectId;
@property(copy, nonatomic) NSString *rawDeviceId; // @dynamic rawDeviceId;
@property(nonatomic) float screenDensityFloat; // @dynamic screenDensityFloat;
@property(nonatomic) float screenHeightInches; // @dynamic screenHeightInches;
@property(nonatomic) int screenHeightPoints; // @dynamic screenHeightPoints;
@property(nonatomic) int screenPixelDensity; // @dynamic screenPixelDensity;
@property(nonatomic) float screenWidthInches; // @dynamic screenWidthInches;
@property(nonatomic) int screenWidthPoints; // @dynamic screenWidthPoints;
@property(retain, nonatomic) YTISpacecastClientInfo *spacecastClientInfo; // @dynamic spacecastClientInfo;
@property(copy, nonatomic) NSString *spacecastToken; // @dynamic spacecastToken;
@property(nonatomic) int theme; // @dynamic theme;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) YTIUnpluggedAppInfo *unpluggedAppInfo; // @dynamic unpluggedAppInfo;
@property(retain, nonatomic) YTIUnpluggedLocationInfo *unpluggedLocationInfo; // @dynamic unpluggedLocationInfo;
@property(nonatomic) int userInterfaceTheme; // @dynamic userInterfaceTheme;
@property(nonatomic) int utcOffsetMinutes; // @dynamic utcOffsetMinutes;
@property(nonatomic) _Bool webpSupport; // @dynamic webpSupport;
@property(nonatomic) int windowHeightPoints; // @dynamic windowHeightPoints;
@property(nonatomic) int windowWidthPoints; // @dynamic windowWidthPoints;

@end
