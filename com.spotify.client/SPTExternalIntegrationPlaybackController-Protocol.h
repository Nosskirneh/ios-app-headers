//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, SPTAccessory, SPTPlayOptions, SPTPlayOrigin, SPTPlayerOptionOverrides, SPTPlayerState;
@protocol SPTAudioSessionController, SPTExternalIntegrationActionCoordinator, SPTExternalIntegrationContent, SPTExternalIntegrationPlaybackControllerObserver, SPTExternalIntegrationPlaybackCoordinator;

@protocol SPTExternalIntegrationPlaybackController <NSObject>
@property(readonly, nonatomic) id <SPTAudioSessionController> audioSessionController;
@property(readonly, nonatomic) SPTPlayerState *playerState;
- (void)removeObserver:(id <SPTExternalIntegrationPlaybackControllerObserver>)arg1;
- (void)addObserver:(id <SPTExternalIntegrationPlaybackControllerObserver>)arg1;
- (void)getFilteredPlayQueueWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)enqueueTrackWithURI:(NSURL *)arg1 accessorySessionID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)seekTo:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)skipToPreviousTrackWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)skipToNextTrackWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)disableRepeatWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)repeatTrackWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)repeatContextWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)disableShuffleWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)enableShuffleWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSArray *)availablePodcastPlaybackSpeeds;
- (NSNumber *)currentPodcastPlaybackSpeed;
- (void)setPodcastPlaybackSpeed:(NSNumber *)arg1 accessorySessionID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)resumeWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)pauseWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performActionWithURI:(NSURL *)arg1 currentAccessory:(SPTAccessory *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)canPerformActionWithURI:(NSURL *)arg1;
- (void)playContentWithURI:(NSURL *)arg1 withOptions:(SPTPlayOptions *)arg2 currentAccessory:(SPTAccessory *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)playContentWithURI:(NSURL *)arg1 withOptions:(SPTPlayOptions *)arg2 origin:(SPTPlayOrigin *)arg3 currentAccessory:(SPTAccessory *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (_Bool)canPlayContentWithURI:(NSURL *)arg1;
- (void)playContent:(id <SPTExternalIntegrationContent>)arg1 withOptions:(SPTPlayerOptionOverrides *)arg2 accessorySessionID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (_Bool)canPlayContent:(id <SPTExternalIntegrationContent>)arg1;
- (void)unregisterActionCoordinator:(id <SPTExternalIntegrationActionCoordinator>)arg1;
- (void)registerActionCoordinator:(id <SPTExternalIntegrationActionCoordinator>)arg1;
- (void)unregisterPlaybackCoordinator:(id <SPTExternalIntegrationPlaybackCoordinator>)arg1;
- (void)registerPlaybackCoordinator:(id <SPTExternalIntegrationPlaybackCoordinator>)arg1;
@end

