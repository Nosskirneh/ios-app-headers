//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BNCSystemObserver : NSObject
{
}

+ (void)setUpdateState;
+ (id)appBuildDate;
+ (id)dateForPathComponent:(id)arg1 inURLs:(id)arg2;
+ (id)appInstallDate;
+ (long long)updateStateWithBuildDate:(id)arg1 appInstallDate:(id)arg2 storedAppVersion:(id)arg3 currentAppVersion:(id)arg4;
+ (id)getUpdateState;
+ (id)getScreenHeight;
+ (id)getScreenWidth;
+ (id)getOSVersion;
+ (id)getOS;
+ (_Bool)isSimulator;
+ (id)getModel;
+ (id)getBrand;
+ (id)getTeamIdentifier;
+ (id)getBundleID;
+ (id)getAppVersion;
+ (id)getDefaultUriScheme;
+ (_Bool)adTrackingSafe;
+ (id)getVendorId;
+ (id)getUniqueHardwareId:(_Bool *)arg1 isDebug:(_Bool)arg2 andType:(id *)arg3;

@end

