//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMAdController, NSTimer;
@protocol GPMVideoAdTimeoutManagerDelegate;

@interface GPMVideoAdTimeoutManager : NSObject
{
    GPMAdController *_adController;
    id <GPMVideoAdTimeoutManagerDelegate> _delegate;
    NSTimer *_initialAdLoadTimeoutTimer;
    NSTimer *_adBufferingTimeoutTimer;
    NSTimer *_adsSDKBufferingTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *adsSDKBufferingTimeoutTimer; // @synthesize adsSDKBufferingTimeoutTimer=_adsSDKBufferingTimeoutTimer;
@property(retain, nonatomic) NSTimer *adBufferingTimeoutTimer; // @synthesize adBufferingTimeoutTimer=_adBufferingTimeoutTimer;
@property(retain, nonatomic) NSTimer *initialAdLoadTimeoutTimer; // @synthesize initialAdLoadTimeoutTimer=_initialAdLoadTimeoutTimer;
@property(nonatomic) __weak id <GPMVideoAdTimeoutManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)destroyAdsDelegateBufferingTimeoutTimer;
- (void)destroyAdsPlaybackBufferingTimeoutTimer;
- (void)destroyInitialAdLoadTimeoutTimer;
- (void)timeoutDueToSDKDelegateDetectedAdBuffering:(id)arg1;
- (void)timeoutDueToAdBuffering;
- (void)timeoutDueToInitialAdLoadDelay:(id)arg1;
- (void)cancelAdIfPlaybackTimeout:(id)arg1;
- (void)startAdsPlaybackBufferingTimeoutTimer:(id)arg1;
- (void)startInitialAdLoadTimeoutTimer;
- (void)startAdsDelegateBufferingTimeoutTimer;
- (id)initWithAdController:(id)arg1;
- (id)init;

@end

