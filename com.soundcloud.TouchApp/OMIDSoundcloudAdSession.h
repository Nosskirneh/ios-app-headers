//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray, NSString, OMIDSoundcloudAdSessionConfiguration, OMIDSoundcloudAdSessionContext, OMIDSoundcloudAdSessionStatePublisher, OMIDSoundcloudBridge, OMIDSoundcloudEventFilter, UIView;
@protocol OMIDSoundcloudAdSessionDelegate;

@interface OMIDSoundcloudAdSession : NSObject
{
    NSPointerArray *_friendlyObstructions;
    UIView *_mainAdView;
    OMIDSoundcloudAdSessionContext *_context;
    _Bool _lastPublishedViewStateWasPopulated;
    OMIDSoundcloudAdSessionConfiguration *_configuration;
    NSString *_identifier;
    OMIDSoundcloudEventFilter *_eventFilter;
    OMIDSoundcloudBridge *_bridge;
    OMIDSoundcloudAdSessionStatePublisher *_statePublisher;
    id <OMIDSoundcloudAdSessionDelegate> _delegate;
}

@property(nonatomic) _Bool lastPublishedViewStateWasPopulated; // @synthesize lastPublishedViewStateWasPopulated=_lastPublishedViewStateWasPopulated;
@property(nonatomic) __weak id <OMIDSoundcloudAdSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) OMIDSoundcloudAdSessionStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
@property(readonly, nonatomic) OMIDSoundcloudBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, nonatomic) OMIDSoundcloudEventFilter *eventFilter; // @synthesize eventFilter=_eventFilter;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) OMIDSoundcloudAdSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (double)deviceVolume;
- (void)setDeviceVolume;
- (void)logErrorWithType:(unsigned long long)arg1 message:(id)arg2;
- (void)internal_removeAllFriendlyObstructions;
- (void)removeAllFriendlyObstructions;
- (void)internal_removeFriendlyObstruction:(id)arg1;
- (void)removeFriendlyObstruction:(id)arg1;
- (void)internal_addFriendlyObstruction:(id)arg1;
- (void)addFriendlyObstruction:(id)arg1;
- (void)onFinish;
- (void)finish;
- (void)onStart;
- (void)start;
- (void)internal_setMainAdView:(id)arg1;
@property(nonatomic) __weak UIView *mainAdView;
- (id)videoEventsPublisher;
- (id)adEventsPublisher;
@property(readonly, nonatomic) NSArray *friendlyObstructions;
- (void)addToRegistry;
- (id)initWithConfiguration:(id)arg1 adSessionContext:(id)arg2 error:(id *)arg3;

@end

