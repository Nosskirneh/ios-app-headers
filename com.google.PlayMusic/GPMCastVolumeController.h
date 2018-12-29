//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMCastControlModalViewDelegate-Protocol.h"

@class CastSessionManager, GPMCastControlModalView, GPMCastSuspensionConfiguration, MPVolumeView, NSString;

@interface GPMCastVolumeController : NSObject <GPMCastControlModalViewDelegate>
{
    MPVolumeView *_mpVolumeView;
    CastSessionManager *_castSessionManager;
    GPMCastSuspensionConfiguration *_suspensionConfiguration;
    float _initialSystemVolume;
    GPMCastControlModalView *_castControlDialog;
    _Bool _interceptSystemVolumeEnabled;
}

- (void).cxx_destruct;
- (void)dialogDidDismissWithDisconnect:(_Bool)arg1;
- (void)dialogDidChangeVolume:(float)arg1;
- (void)showCastControlDialogFromSender:(id)arg1;
- (void)resetSystemVolumeToInitialValue;
- (void)maybeUpdateCastVolumeFromNewSystemVolume:(float)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disconnect;
- (void)handleCastVolumeChange;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)getAndClipInitialSystemVolume;
- (void)addObservers;
- (void)dealloc;
- (void)disableInterceptSystemVolume;
- (void)enableInterceptSystemVolume;
- (id)initWithCastSessionManager:(id)arg1 suspensionConfiguration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
