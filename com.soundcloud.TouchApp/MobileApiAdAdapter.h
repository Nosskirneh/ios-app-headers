//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MobileApiAdAdapter : NSObject
{
}

+ (id)sharedInstance;
- (id)trackingStateForErrorAd:(id)arg1 monetizableTrack:(id)arg2 fromEndpoint:(id)arg3;
- (id)trackingStateForVideoAd:(id)arg1 monetizableTrack:(id)arg2 fromEndpoint:(id)arg3;
- (id)trackingStateForInterstitial:(id)arg1 monetizableTrack:(id)arg2 fromEndpoint:(id)arg3;
- (id)trackingStateForAudioAd:(id)arg1 monetizableTrack:(id)arg2 fromEndpoint:(id)arg3;
- (id)trackingStateForLeaveBehind:(id)arg1 monetizableTrack:(id)arg2 fromEndpoint:(id)arg3;
- (id)trackingStateForAppInstallInlayAd:(id)arg1 requestEndpoint:(id)arg2;

@end
