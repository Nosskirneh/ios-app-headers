//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ExternalDisplayInfoPresenter, PlaybackService, PlayerItemService, PlayerTrackServiceFactory, RACDisposable;

@interface ExternalDisplayInfoViewController : UIViewController
{
    ExternalDisplayInfoPresenter *_presenter;
    PlaybackService *_playbackService;
    PlayerTrackServiceFactory *_trackServiceFactory;
    PlayerItemService *_trackService;
    RACDisposable *_itemDisposable;
    RACDisposable *_trackDisposable;
    RACDisposable *_playStateDisposable;
    RACDisposable *_waveformDisposable;
}

@property(retain, nonatomic) RACDisposable *waveformDisposable; // @synthesize waveformDisposable=_waveformDisposable;
@property(retain, nonatomic) RACDisposable *playStateDisposable; // @synthesize playStateDisposable=_playStateDisposable;
@property(retain, nonatomic) RACDisposable *trackDisposable; // @synthesize trackDisposable=_trackDisposable;
@property(retain, nonatomic) RACDisposable *itemDisposable; // @synthesize itemDisposable=_itemDisposable;
@property(retain, nonatomic) PlayerItemService *trackService; // @synthesize trackService=_trackService;
@property(readonly, nonatomic) PlayerTrackServiceFactory *trackServiceFactory; // @synthesize trackServiceFactory=_trackServiceFactory;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) ExternalDisplayInfoPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)fetchWaveform;
- (id)observePlayState;
- (id)observeProgress;
- (id)observeCurrentPlayQueueItem;
- (void)stopObservingItem;
- (void)startObservingItem:(id)arg1;
- (void)stopObservingPlayback;
- (void)startObservingPlayback;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
