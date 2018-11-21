//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPopupPermissionsAggregator-Protocol.h"

@class NSHashTable, NSString, SPTDefaultPopupPermissionManager;

@interface SPTPopupPermissions : NSObject <SPTPopupPermissionsAggregator>
{
    NSHashTable *_permissionManagers;
    SPTDefaultPopupPermissionManager *_defaultPermissionManager;
}

+ (id)sharedPermissions;
@property(retain, nonatomic) SPTDefaultPopupPermissionManager *defaultPermissionManager; // @synthesize defaultPermissionManager=_defaultPermissionManager;
@property(retain, nonatomic) NSHashTable *permissionManagers; // @synthesize permissionManagers=_permissionManagers;
- (void).cxx_destruct;
- (_Bool)popupsPermitted;
- (void)removePermissionManager:(id)arg1;
- (void)addPermissionManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

