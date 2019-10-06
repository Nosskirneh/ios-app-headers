//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingBarModelObserver-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBarModel, SPTNowPlayingLogger, SPTPlayerState;
@protocol SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate, SPTNowPlayingManager;

@interface SPTNowPlayingBarLeftAccessoryCoverArtViewModel : NSObject <SPTNowPlayingBarModelObserver>
{
    id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> _delegate;
    SPTNowPlayingLogger *_logger;
    SPTNowPlayingBarModel *_nowPlayingBarModel;
    id <SPTNowPlayingManager> _nowPlayingManager;
    NSURL *_currentImageURL;
    SPTPlayerState *_currentPlayerState;
}

@property(retain, nonatomic) SPTPlayerState *currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(retain, nonatomic) NSURL *currentImageURL; // @synthesize currentImageURL=_currentImageURL;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPTNowPlayingBarModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logBarTapped;
- (void)didTapBar;
- (void)reloadImage;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (id)initWithNowPlayingManager:(id)arg1 nowPlayingBarModel:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

