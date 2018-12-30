//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGLocalPlaylistsSection.h"

@class NSString;

@interface ANGOwnPlaylistsSection : ANGLocalPlaylistsSection
{
}

- (id)realmPlaylistsQueryPredicates;
- (void)setNumberOfSongsSubtitle:(id)arg1 inLabel:(id)arg2;
- (id)cellForObject:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3;
- (id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (unsigned long long)rowCountWithTotalItems:(unsigned long long)arg1 cap:(unsigned long long)arg2;
- (id)objectAtIndex:(id)arg1 collectionView:(id)arg2;
@property(readonly) NSString *allowMusicSource;
- (void)closeButtonTapped:(id)arg1;
- (id)addFromDeviceCell:(id)arg1 indexPath:(id)arg2;
- (long long)indexOfLastVisibleItem;
- (_Bool)isAddFromDeviceRow:(id)arg1 andCollection:(id)arg2;
- (_Bool)shouldShowAddFromDevice;
- (id)newPlaylistCell:(id)arg1 index:(id)arg2;
- (_Bool)showNewPlaylistButton;
- (_Bool)isCreateNewPlaylistCellAtIndex:(id)arg1 andCollection:(id)arg2;
- (_Bool)isSyncingCellAtIndex:(id)arg1 andCollection:(id)arg2;
- (id)cellForSyncing:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldShowSyncingCell;
- (unsigned long long)type;

@end

