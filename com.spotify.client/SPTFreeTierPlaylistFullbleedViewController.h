//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTFreeTierPlaylistHeader-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class GLUEButton, NSString, SPTFreeTierPlaylistFullbleedGLUETheme, SPTFreeTierPlaylistFullbleedHeaderView;
@protocol SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel, SPTImageLoader, SPTImageLoaderRequest;

@interface SPTFreeTierPlaylistFullbleedViewController : UIViewController <SPTImageLoaderDelegate, SPTEntityHeaderContentController, SPTFreeTierPlaylistHeader>
{
    id <SPTFreeTierPlaylistFullbleedHeaderViewModel> _fullbleedViewModel;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
    id <SPTImageLoader> _imageLoader;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    SPTFreeTierPlaylistFullbleedGLUETheme *_fullbleedTheme;
    double _labelOffsetRatio;
    id <SPTImageLoaderRequest> _imageLoaderRequest;
    GLUEButton *_playButton;
}

@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) id <SPTImageLoaderRequest> imageLoaderRequest; // @synthesize imageLoaderRequest=_imageLoaderRequest;
@property(readonly, nonatomic) double labelOffsetRatio; // @synthesize labelOffsetRatio=_labelOffsetRatio;
@property(readonly, nonatomic) SPTFreeTierPlaylistFullbleedGLUETheme *fullbleedTheme; // @synthesize fullbleedTheme=_fullbleedTheme;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedViewModel; // @synthesize fullbleedViewModel=_fullbleedViewModel;
- (void).cxx_destruct;
- (id)filterSearchBar;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)toggleFollowButton;
- (void)didTapPlayButton;
- (void)updateFollowButtonState:(_Bool)arg1;
- (void)update;
- (void)updateViewStyle;
- (void)setBackgroundImageWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithFullbleedViewModel:(id)arg1 playViewModel:(id)arg2 followViewModel:(id)arg3 fullbleedTheme:(id)arg4 imageLoader:(id)arg5 collectionConfiguration:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTFreeTierPlaylistFullbleedHeaderView *view; // @dynamic view;

@end

