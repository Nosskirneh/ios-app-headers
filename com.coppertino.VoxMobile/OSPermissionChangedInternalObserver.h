//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "OSPermissionStateObserver-Protocol.h"

@class NSString;

@interface OSPermissionChangedInternalObserver : NSObject <OSPermissionStateObserver>
{
}

+ (void)fireChangesObserver:(id)arg1;
- (void)onChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

