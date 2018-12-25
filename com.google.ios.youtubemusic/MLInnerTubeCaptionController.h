//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCaptionController-Protocol.h"
#import "YTOfflineModeObserver-Protocol.h"

@class GIMMe, MLCaptionService, MLInnerTubeCaptionTrack, NSArray, NSString, YTIAudioTrack, YTIPlayerCaptionsRenderer, YTIPlayerCaptionsTrackListRenderer;
@protocol MLCaptionConfig, MLCaptionControllerDelegate, MLCaptionTrack, MLOfflineTracklistCaptionProvider, MLPlayerCaptionProtocol, YTOfflineModeProvider;

@interface MLInnerTubeCaptionController : NSObject <YTOfflineModeObserver, MLCaptionController>
{
    NSString *_videoID;
    YTIPlayerCaptionsTrackListRenderer *_playerCaptionsTracklistRenderer;
    YTIPlayerCaptionsRenderer *_playerCaptionsRenderer;
    _Bool _hasOfflineState;
    MLCaptionService *_captionService;
    id <MLCaptionConfig> _captionConfig;
    id <YTOfflineModeProvider> _offlineModeProvider;
    id <MLOfflineTracklistCaptionProvider> _offlineTracklistCaptionProvider;
    MLInnerTubeCaptionTrack *_activeCaptionTrack;
    MLInnerTubeCaptionTrack *_forcedCaptionTrack;
    MLInnerTubeCaptionTrack *_defaultCaptionTrack;
    MLInnerTubeCaptionTrack *_selectedCaptionTrack;
    YTIAudioTrack *_currentAudioTrack;
    _Bool _captionsEnabledWhenAvailable;
    id <MLCaptionControllerDelegate> delegate;
    id <MLPlayerCaptionProtocol> _playerCaptionDelegate;
    GIMMe *_gimme;
    NSArray *_userVisibleCaptionTracks;
}

@property(retain, nonatomic) NSArray *userVisibleCaptionTracks; // @synthesize userVisibleCaptionTracks=_userVisibleCaptionTracks;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <MLPlayerCaptionProtocol> playerCaptionDelegate; // @synthesize playerCaptionDelegate=_playerCaptionDelegate;
@property(nonatomic) __weak id <MLCaptionControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)systemPreferredLanguage;
- (int)captionsVisibility;
- (_Bool)hasPlayerCaptions;
- (void)loadUserCaptionsBasedOnPastUserSelection;
- (void)loadUserCaptions;
- (void)loadCaptionTracksWithBlock:(CDUnknownBlockType)arg1;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)setCaptionTracks:(id)arg1 forcedTrack:(id)arg2 defaultTrack:(id)arg3;
- (void)loadCaptionsWithTrack:(id)arg1;
- (void)loadCaptionsWithDefaultOrFirstUserVisibleTrack;
- (void)loadCaptionTracks;
- (void)offlineModeDidChange;
- (void)playerCaptionOptionsDidChange:(id)arg1;
- (void)enableCaptionsIfAvailable;
- (void)setCurrentAudioTrack:(id)arg1;
- (void)start;
@property(retain, nonatomic) id <MLCaptionTrack> selectedCaptionTrack;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
- (void)dealloc;
- (id)initWithVideo:(id)arg1;
- (id)initWithPlayerData:(id)arg1;
- (id)initWithVideoID:(id)arg1 playerCaptions:(id)arg2 hasOfflineState:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

