//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsTableViewController.h"

#import "DZRLibraryItemTableViewCellDelegate-Protocol.h"

@class DeezerArtist, NSString, PlayerControllerListeningContext;

@interface DZRArtistTopTracksTableViewController : DZRLibraryItemsTableViewController <DZRLibraryItemTableViewCellDelegate>
{
    DeezerArtist *_artist;
    PlayerControllerListeningContext *_listeningContext;
}

@property(readonly, nonatomic) PlayerControllerListeningContext *listeningContext; // @synthesize listeningContext=_listeningContext;
@property(retain, nonatomic) DeezerArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)tabName;
- (id)navigationPath;
- (void)dzrActionFromDataSource:(id)arg1 atIndexPath:(id)arg2;
- (long long)contextMenuTypeForControllerForItem:(id)arg1;
- (_Bool)shouldObserveSynchronizationNotifications;
- (id)libraryItemCellListeningContext:(id)arg1;
- (void)libraryItemCellOptionButtonTouched:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)currentCollectionIsQueued;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

