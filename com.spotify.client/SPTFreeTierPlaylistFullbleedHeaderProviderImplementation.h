//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHeaderProvider-Protocol.h"

@class NSString, SPTFreeTierPlaylistFullbleedGLUETheme;
@protocol SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel, SPTImageLoader;

@interface SPTFreeTierPlaylistFullbleedHeaderProviderImplementation : NSObject <SPTFreeTierPlaylistHeaderProvider>
{
    SPTFreeTierPlaylistFullbleedGLUETheme *_fullbleedTheme;
    id <SPTImageLoader> _imageLoader;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFreeTierPlaylistFullbleedHeaderViewModel> _fullbleedViewModel;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
}

@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedViewModel; // @synthesize fullbleedViewModel=_fullbleedViewModel;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTFreeTierPlaylistFullbleedGLUETheme *fullbleedTheme; // @synthesize fullbleedTheme=_fullbleedTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool drawDropShadow;
@property(readonly, nonatomic) _Bool drawBottomLineLayer;
- (id)provideHeader;
- (void)configureBarButtonManagerDelegate:(id)arg1;
- (void)configureWithPlayViewModel:(id)arg1 followViewModel:(id)arg2 defaultHeaderViewModel:(id)arg3 fullbleedHeaderViewModel:(id)arg4 filterSortBarView:(id)arg5;
- (id)initWithTheme:(id)arg1 imageLoader:(id)arg2 collectionConfiguration:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

