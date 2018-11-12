//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdBackgroundStateManaging-Protocol.h"

@class NSString;

@interface FBAdBackgroundStateManager : NSObject <FBAdBackgroundStateManaging>
{
    _Bool _applicationBecomingActive;
    unsigned long long _extensionState;
}

@property unsigned long long extensionState; // @synthesize extensionState=_extensionState;
@property(nonatomic, getter=isApplicationBecomingActive) _Bool applicationBecomingActive; // @synthesize applicationBecomingActive=_applicationBecomingActive;
- (long long)applicationState;
- (_Bool)isApplicationBackgrounded;
- (_Bool)isApplicationInactive;
- (_Bool)isApplicationActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
