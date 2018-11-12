//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;
@protocol SPTLogCenter, SPTOnDemandSet, SPTViewLogger;

@interface SPTFreeTierPlaylistLogger : NSObject
{
    NSString *_playlistViewPageIdentifier;
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    NSURL *_pageURL;
    id <SPTOnDemandSet> _onDemandSet;
    NSString *_featureId;
}

@property(copy, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(copy, nonatomic) NSString *playlistViewPageIdentifier; // @synthesize playlistViewPageIdentifier=_playlistViewPageIdentifier;
- (void).cxx_destruct;
- (void)logUIInteractionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 interactionType:(id)arg4 userIntent:(id)arg5;
- (void)logUIInteractionWithSectionId:(id)arg1 targetURI:(id)arg2 userIntent:(id)arg3;
- (void)logSortingIdentifier:(id)arg1 index:(unsigned long long)arg2;
- (void)logSortFilterPickerCanceled;
- (void)logHeaderViewSlideToPage:(long long)arg1;
- (void)logHeaderPressedPlaylistOwner;
- (void)logPressedCancelInEditView;
- (void)logPressedDoneInEditView;
- (void)logUpdateDescription;
- (void)logRenamePlaylist;
- (void)logDeletedTrackInEditView;
- (void)logMovedTrackInEditView;
- (void)logOfflineChanged:(_Bool)arg1;
- (void)logTrackLikeActionSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2 liked:(_Bool)arg3;
- (void)logTrackBanActionSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2 banned:(_Bool)arg3;
- (void)logTrackContextMenuSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2;
- (void)logTrackSelectedAtIndex:(unsigned long long)arg1 trackURI:(id)arg2;
- (void)logTrackCloudSelected:(_Bool)arg1;
- (void)logAllSongsAddSongsSelected;
- (void)logBrowseButtonClicked;
- (void)logEditButtonClicked;
- (void)logAddSongsSelectedOnEmptyPlaylist:(_Bool)arg1;
- (void)logShuffleBadgeSelected;
- (void)logPlayButtonStartPlaying:(_Bool)arg1;
- (void)logHeaderContextMenuButton;
- (void)logHeartButtonSelected:(_Bool)arg1;
- (void)logViewDidFailToLoadWithError:(id)arg1 pageIdentifier:(id)arg2;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 pageURL:(id)arg3 onDemandSet:(id)arg4;

@end

