//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTInlinePlaybackContainerControllerProtocol-Protocol.h"
#import "YTPlayerMDXObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTICommand, YTPlayerViewController;
@protocol YTInlinePlaybackContainerDelegate, YTResponder;

@interface YTVideoPreviewController : NSObject <YTInlinePlaybackContainerControllerProtocol, YTPlayerMDXObserver, YTResponder>
{
    id <YTInlinePlaybackContainerDelegate> _inlinePlaybackContainerDelegate;
    _Bool _inlinePlayerActive;
    YTICommand *_errorNavigationEndpoint;
    _Bool _inlineVideoPlaying;
    _Bool _inlinePlaybackGlobalPlayEnabled;
    _Bool _mdxActive;
    _Bool _suppressInlinePlayback;
    id <YTResponder> _parentResponder;
    YTICommand *_activeNavigationEndpoint;
    YTPlayerViewController *_playerViewController;
}

@property(readonly, nonatomic) YTPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) YTICommand *activeNavigationEndpoint; // @synthesize activeNavigationEndpoint=_activeNavigationEndpoint;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setInlinePlaybackGlobalPlayEnabled:(_Bool)arg1;
- (void)switchToContainer:(id)arg1;
- (_Bool)shouldSwitchToContainer:(id)arg1;
- (_Bool)activeContainerVideoErrored;
- (_Bool)activeContainerVideoMatchesPlayerVideo;
- (_Bool)activeEndpointMatchesContainer:(id)arg1;
- (void)claimPlayerViewController;
- (void)playActiveInlinePlaybackContainerWithAutoplay:(_Bool)arg1;
- (void)showPlayerViewAnimated:(_Bool)arg1;
- (void)resetPlayer;
- (void)updatePlayerView;
- (void)mdxSessionDidEnd;
- (void)mdxSessionDidBegin;
- (void)restorePlayerViewToActiveContainer;
- (void)setSuppressInlinePlayback:(_Bool)arg1;
- (_Bool)inlinePlayerActive;
- (void)showQualityMenuFromView:(id)arg1;
- (void)showCaptionsMenuFromView:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)isMDXActive;
- (_Bool)isInlinePlaybackGlobalPlayEnabled;
- (void)viewWillDisappearForDelegate:(id)arg1;
- (void)clearActiveContainer;
- (void)setActiveContainer:(id)arg1 indexPath:(id)arg2 inlinePlaybackContainerDelegate:(id)arg3;
- (void)setInlinePlayerActive:(_Bool)arg1;
- (_Bool)isInlinePlayerActive;
- (id)initWithPlayerViewController:(id)arg1 mdxActive:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

