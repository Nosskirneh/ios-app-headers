//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "PINRemoteImageCategory-Protocol.h"

@class CADisplayLink, NSString, PINCachedAnimatedImage;

@interface PINAnimatedImageView : UIImageView <PINRemoteImageCategory>
{
    double _playHead;
    unsigned long long _playedLoops;
    unsigned long long _lastSuccessfulFrameIndex;
    _Bool _playbackPaused;
    PINCachedAnimatedImage *_animatedImage;
    CADisplayLink *_displayLink;
    NSString *_animatedImageRunLoopMode;
    struct CGImage *_frameImage;
    double _lastDisplayLinkFire;
}

@property(nonatomic) double lastDisplayLinkFire; // @synthesize lastDisplayLinkFire=_lastDisplayLinkFire;
@property(nonatomic) struct CGImage *frameImage; // @synthesize frameImage=_frameImage;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (unsigned long long)frameIndexAtPlayHeadPosition:(double)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)updateAnimationForPossibleVisibility;
- (_Bool)canBeVisible;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)setAlpha:(double)arg1;
- (void)displayLayer:(id)arg1;
- (void)setImage:(id)arg1;
- (struct CGImage *)imageRef;
- (id)image;
- (void)stopAnimating;
- (void)startAnimating;
- (void)checkIfShouldAnimate;
- (void)setCoverImage:(id)arg1;
- (void)coverImageCompleted:(id)arg1;
@property(nonatomic, getter=isPlaybackPaused) _Bool playbackPaused; // @synthesize playbackPaused=_playbackPaused;
@property(retain, nonatomic) NSString *animatedImageRunLoopMode; // @synthesize animatedImageRunLoopMode=_animatedImageRunLoopMode;
@property(retain, nonatomic) PINCachedAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void)dealloc;
- (void)commonInit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAnimatedImage:(id)arg1;
- (_Bool)pin_ignoreGIFs;
- (void)pin_clearImages;
- (void)pin_updateUIWithRemoteImageManagerResult:(id)arg1;
- (void)pin_setPlaceholderWithImage:(id)arg1;
@property(nonatomic) _Bool pin_updateWithProgress;
- (void)pin_setDownloadImageOperationUUID:(id)arg1;
- (id)pin_downloadImageOperationUUID;
- (void)pin_cancelImageDownload;
- (void)pin_setImageFromURLs:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURLs:(id)arg1 placeholderImage:(id)arg2;
- (void)pin_setImageFromURLs:(id)arg1;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pin_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4;
- (void)pin_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2;
- (void)pin_setImageFromURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

