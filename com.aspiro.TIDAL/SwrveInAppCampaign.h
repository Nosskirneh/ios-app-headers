//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SwrveCampaign.h"

@class NSArray;

@interface SwrveInAppCampaign : SwrveCampaign
{
    NSArray *messages;
}

@property(retain) NSArray *messages; // @synthesize messages;
- (void).cxx_destruct;
- (_Bool)assetsReady:(id)arg1;
- (_Bool)supportsOrientation:(long long)arg1;
- (id)messageForEvent:(id)arg1 withPayload:(id)arg2 withAssets:(id)arg3 atTime:(id)arg4 withReasons:(id)arg5;
- (id)messageForEvent:(id)arg1 withAssets:(id)arg2 atTime:(id)arg3;
- (_Bool)hasMessageForEvent:(id)arg1 withPayload:(id)arg2;
- (_Bool)hasMessageForEvent:(id)arg1;
- (void)messageDismissed:(id)arg1;
- (void)messageWasShownToUser:(id)arg1 at:(id)arg2;
- (void)messageWasShownToUser:(id)arg1;
- (void)addAssetsToQueue:(id)arg1;
- (id)initAtTime:(id)arg1 fromDictionary:(id)arg2 withAssetsQueue:(id)arg3 forController:(id)arg4;

@end

