//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRCommonTableViewController.h"

#import "DZRContextMenuDelegate-Protocol.h"
#import "DZRPlayerTrackCellDelegate-Protocol.h"

@class NSString;

@interface DZRQueueListViewController : DZRCommonTableViewController <DZRPlayerTrackCellDelegate, DZRContextMenuDelegate>
{
    _Bool _editingQueue;
}

@property(nonatomic, getter=isEditingQueue) _Bool editingQueue; // @synthesize editingQueue=_editingQueue;
- (void)contextMenu:(id)arg1 didTriggerAction:(long long)arg2;
- (void)queuedTracksDidChange:(id)arg1;
- (void)queuedCollectionDidChange:(id)arg1;
- (void)currentTrackDidChangeInfos:(id)arg1;
- (void)playerDidChangeTrack:(id)arg1;
- (void)queuerDidInsertSponsoredTrack:(id)arg1;
- (void)trackControllerFailed:(id)arg1;
- (void)trackControllerDidFinishPlayback:(id)arg1;
- (void)trackControllerDidStartPlayback:(id)arg1;
- (void)trackControllerDidPausePlayback:(id)arg1;
- (void)startObservingPlayback;
- (void)updateFooter;
- (void)updateHeader;
- (_Bool)canEditQueueList;
- (_Bool)playerIsAllowedToDisplayNextTracks;
- (void)updatePlayingState:(_Bool)arg1;
- (id)currentTrackIndexPath;
- (unsigned long long)currentTrackIndex;
- (id)currentRadio;
- (long long)queuedTracksTotalDuration;
- (id)queuedTracks;
- (id)player;
- (void)showOptionsViewForTrack:(id)arg1;
- (void)playerTrackCellOptionButtonTouched:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)performQueueEditing:(CDUnknownBlockType)arg1;
- (void)updateVisibleCellsState;
- (void)updateContent;
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

