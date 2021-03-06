//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SPTEntityHeaderContentController><SPTFreeTierPlaylistHeader, SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistBarButtonManagerDelegate, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel;

@protocol SPTFreeTierPlaylistHeaderProvider <NSObject>
@property(nonatomic, readonly) _Bool drawBottomLineLayer;
@property(nonatomic, readonly) _Bool drawDropShadow;
- (UIViewController<SPTEntityHeaderContentController><SPTFreeTierPlaylistHeader> *)provideHeader;
- (void)configureBarButtonManagerDelegate:(id <SPTFreeTierPlaylistBarButtonManagerDelegate>)arg1;
- (void)configureWithPlayViewModel:(id <SPTFreeTierPlaylistPlayViewModel>)arg1 followViewModel:(id <SPTFreeTierPlaylistFollowViewModel>)arg2 defaultHeaderViewModel:(id <SPTFreeTierPlaylistDefaultHeaderViewModel>)arg3 fullbleedHeaderViewModel:(id <SPTFreeTierPlaylistFullbleedHeaderViewModel>)arg4 playlistOfflineViewModel:(id <SPTFreeTierEntityOfflineViewModel>)arg5 filterSortBarView:(UIView *)arg6;
@end

