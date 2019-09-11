//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingModesRegistry-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTNowPlayingModesRegistryImplementation : NSObject <SPTNowPlayingModesRegistry>
{
    NSMutableDictionary *_modes;
}

@property(readonly, nonatomic) NSMutableDictionary *modes; // @synthesize modes=_modes;
- (void).cxx_destruct;
- (void)unregisterAllModes;
- (void)deregisterMode:(id)arg1;
- (void)registerMode:(id)arg1;
- (id)modeWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

