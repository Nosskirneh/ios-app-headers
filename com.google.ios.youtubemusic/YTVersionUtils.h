//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTVersionUtils : NSObject
{
}

+ (id)deviceSystemVersion;
+ (CDStruct_2ec95fd7)operatingSystemVersion;
+ (id)OSBuild;
+ (id)appVersionAtIndex:(unsigned long long)arg1;
+ (id)appVersionMinor;
+ (id)appVersionMajor;
+ (id)realOSVersionWithBuild;
+ (id)OSVersionWithBuild;
+ (id)gcmSenderId;
+ (long long)compareVersion:(id)arg1 toVersion:(id)arg2;
+ (id)appVersionMajorMinor;
+ (long long)OSVersionIncremental;
+ (long long)OSVersionMinor;
+ (long long)OSVersionMajor;
+ (id)OSVersionMajorMinor;
+ (id)appVersionLong;
+ (id)appVersion;
+ (id)appID;
+ (id)appVersionForAdsReporting;
+ (id)appName;

@end
