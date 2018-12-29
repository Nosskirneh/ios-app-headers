//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WMPModule-Protocol.h"

@class AVPlayerLooper, AVQueuePlayer, NSDictionary, NSNumber, NSString, UIImageView, UIView, WMPImageService, WMPProgressAnimator;
@protocol WMPModuleDelegate;

@interface WMPImageModule : UIViewController <WMPModule>
{
    _Bool _shouldBlurImage;
    _Bool _shouldCastShadow;
    _Bool _shouldRound;
    _Bool _shadowDirectionLeft;
    _Bool _shouldNotUsePlaceholder;
    _Bool _shouldHideTillImageLoaded;
    _Bool _shouldAnimateAlbumCover;
    id _itemId;
    unsigned long long _moduleType;
    NSNumber *_imageCacheSize;
    UIImageView *_coverArtImageView;
    WMPImageService *_imageService;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_looper;
}

+ (id)getInstance;
@property(retain, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property(retain, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(retain, nonatomic) WMPImageService *imageService; // @synthesize imageService=_imageService;
@property(nonatomic) _Bool shouldAnimateAlbumCover; // @synthesize shouldAnimateAlbumCover=_shouldAnimateAlbumCover;
@property(nonatomic) _Bool shouldHideTillImageLoaded; // @synthesize shouldHideTillImageLoaded=_shouldHideTillImageLoaded;
@property(nonatomic) _Bool shouldNotUsePlaceholder; // @synthesize shouldNotUsePlaceholder=_shouldNotUsePlaceholder;
@property(nonatomic) _Bool shadowDirectionLeft; // @synthesize shadowDirectionLeft=_shadowDirectionLeft;
@property(nonatomic) _Bool shouldRound; // @synthesize shouldRound=_shouldRound;
@property(nonatomic) _Bool shouldCastShadow; // @synthesize shouldCastShadow=_shouldCastShadow;
@property(nonatomic) _Bool shouldBlurImage; // @synthesize shouldBlurImage=_shouldBlurImage;
@property(retain, nonatomic) UIImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) NSNumber *imageCacheSize; // @synthesize imageCacheSize=_imageCacheSize;
@property(nonatomic) unsigned long long moduleType; // @synthesize moduleType=_moduleType;
@property(retain, nonatomic) id itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)configureForGenre;
- (void)configureForMood;
- (void)configureImageForPlaylist:(id)arg1;
- (void)configureForPlaylist;
- (void)configureImageForArtist:(id)arg1;
- (void)configureForArtist;
- (void)configureImageForAlbum:(id)arg1;
- (void)resumePlayback;
- (void)setPlaceholderCoverForAlbum:(id)arg1;
- (void)playAsset:(id)arg1;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (void)configureVideoCoverForAlbum:(id)arg1;
- (void)fetchAlbumWithId:(id)arg1;
- (void)configureForAlbum;
- (void)configureByModuleType:(unsigned long long)arg1;
- (void)applyTransitionWithImage:(id)arg1;
- (void)performTransitionWithImage:(id)arg1;
- (void)update;
- (void)applicationDidBecomeActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WMPProgressAnimator *animator;
@property(nonatomic) _Bool canCollapse;
@property(nonatomic) _Bool contentLoadFinished;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *eventMetadata;
@property(nonatomic) _Bool hasDetails;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *header;
@property(nonatomic) double heightConstraint;
@property(nonatomic) double heightUnits;
@property(nonatomic) double horizontalUnits;
@property(nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool isLoadedFromNavigation;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate;
@property(retain, nonatomic) NSString *moduleTag;
@property(retain, nonatomic) UIView *noConnectionView;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool sortingEnabled;
@property(readonly) Class superclass;

@end

