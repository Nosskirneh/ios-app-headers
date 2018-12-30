//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGGroupViewController.h"

@class Artist;

@interface ANGGroupByArtistViewController : ANGGroupViewController
{
    Artist *_myArtist;
}

@property(retain, nonatomic) Artist *myArtist; // @synthesize myArtist=_myArtist;
- (void).cxx_destruct;
- (void)deleteObjectAtRow:(long long)arg1;
- (void)sharePressed;
- (id)clearReason;
- (id)clearMessage;
- (id)buildPlayQueue;
- (_Bool)isCurrentlyPlayingQueue;
- (_Bool)disableSkipLimit;
- (id)songsForArtist:(id)arg1;
- (void)handleClickedObject:(id)arg1 inSection:(id)arg2 atIndexPath:(id)arg3 correctedIndex:(long long)arg4;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)subtitleLabelTapped;
- (id)defaultHeaderButtons;
- (id)theArtist;
- (id)coverArtId;
- (id)placeholderImage;
- (void)reloadHeader;
- (void)setArtistFollowed:(_Bool)arg1;
- (void)followUnfollowPressed;
- (id)headerBarImageViewLabels;
- (void)generateContentSection;
- (void)generateSongsAndAlbumsList;
- (void)registerNotifications;
- (void)refreshFollowStateFromNotification:(id)arg1;

@end

