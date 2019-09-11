//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GCKDBDeviceInfo, GCKDBGuestModeInfo, NSSet;

@interface GCKDBAppSupportStateInfo : NSManagedObject
{
}

- (_Bool)hasAllUnsupportedAppIDs:(id)arg1;
- (void)addOrUpdateAppIDs:(id)arg1 asSupported:(_Bool)arg2 withTTL:(double)arg3;
- (void)addOrUpdateAppID:(id)arg1 asSupported:(_Bool)arg2 withTTL:(double)arg3;
- (id)cachedAppInfoWithAppID:(id)arg1;
- (long long)supportStateForAppID:(id)arg1;
- (id)cachedAppIDsSupported:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *cachedAppInfos; // @dynamic cachedAppInfos;
@property(retain, nonatomic) GCKDBDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) GCKDBGuestModeInfo *guestModeInfo; // @dynamic guestModeInfo;

@end

