//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingModel, SPTTheme, UIColor;
@protocol GLUECancellableTask, GLUEImageLoader, SPTNowPlayingBackgroundViewModelDelegate;

@interface SPTNowPlayingBackgroundViewModel : NSObject <SPTNowPlayingModelObserver>
{
    id <SPTNowPlayingBackgroundViewModelDelegate> _delegate;
    UIColor *_color;
    SPTNowPlayingModel *_nowPlayingModel;
    id <GLUEImageLoader> _imageLoader;
    SPTTheme *_theme;
    id <GLUECancellableTask> _task;
}

@property(retain, nonatomic) id <GLUECancellableTask> task; // @synthesize task=_task;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <SPTNowPlayingBackgroundViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)updatedBackgroundColorForTrack:(id)arg1 nowPlayingModel:(id)arg2;
- (void)setBackgroundToBlack;
- (_Bool)shouldExtractColorForTrack:(id)arg1 playerState:(id)arg2;
- (id)initWithNowPlayingModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

