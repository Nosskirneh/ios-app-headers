//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MGSwipeTableCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VOXContentListAdapterProtocol-Protocol.h"
#import "VOXItemStateIndicatorViewProtocol-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UITableView, VOXMediaItemIndicatorModel, VOXStreamPlaylistEntity, VOXStreamPlaylistInfoTableViewCell;
@protocol VOXStreamPlaylistTableViewCellDelegate;

@interface VOXStreamPlaylistTableViewCell : UITableViewCell <UITableViewDataSource, UITableViewDelegate, VOXContentListAdapterProtocol, VOXItemStateIndicatorViewProtocol, MGSwipeTableCellDelegate>
{
    _Bool _isExpanded;
    id <VOXStreamPlaylistTableViewCellDelegate> _playlistCellDelegate;
    VOXStreamPlaylistEntity *_playlistEntity;
    VOXMediaItemIndicatorModel *_playlistIndicatorModel;
    NSArray *_playlistTracks;
    UIImageView *_blurredImageView;
    UITableView *_tableView;
    UIButton *_moreTracksButton;
    VOXStreamPlaylistInfoTableViewCell *_infoTableViewCell;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak VOXStreamPlaylistInfoTableViewCell *infoTableViewCell; // @synthesize infoTableViewCell=_infoTableViewCell;
@property(nonatomic) __weak UIButton *moreTracksButton; // @synthesize moreTracksButton=_moreTracksButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) NSArray *playlistTracks; // @synthesize playlistTracks=_playlistTracks;
@property(retain, nonatomic) VOXMediaItemIndicatorModel *playlistIndicatorModel; // @synthesize playlistIndicatorModel=_playlistIndicatorModel;
@property(retain, nonatomic) VOXStreamPlaylistEntity *playlistEntity; // @synthesize playlistEntity=_playlistEntity;
@property(nonatomic) __weak id <VOXStreamPlaylistTableViewCellDelegate> playlistCellDelegate; // @synthesize playlistCellDelegate=_playlistCellDelegate;
- (void).cxx_destruct;
- (long long)visibleTracksCount;
- (id)indicatorViewNestedUUIDs;
- (id)pausePlaybackVisualization;
- (void)refreshIndicatorViewWithModel:(id)arg1;
- (id)indicatorView;
- (id)nestedVisibleCells;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (_Bool)swipeTableCell:(id)arg1 canSwipe:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)moreTracksButtonClicked:(id)arg1;
- (void)reloadPlaylistTrackCellWithIndexPath:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)hideSwipeAnimated:(_Bool)arg1;
- (void)reloadCellWithStreamPlaylistEntitiy:(id)arg1 stateIndicatorModel:(id)arg2 isExpanded:(_Bool)arg3;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
