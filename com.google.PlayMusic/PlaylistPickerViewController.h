//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTableViewController.h"

@class MDCAppBar, NITableViewActions, NSArray, NSString;

@interface PlaylistPickerViewController : GOOTableViewController
{
    NITableViewActions *_actions;
    NSArray *_tracks;
    NSString *_sourcePlaylistID;
    MDCAppBar *_appBar;
}

- (void).cxx_destruct;
- (long long)modalPresentationStyle;
- (id)cancelText;
- (id)okText;
- (void)addToPlaylist:(id)arg1;
- (void)showDuplicateTracksAlertForPlaylist:(id)arg1;
- (void)newPlaylistDialog;
- (void)dismiss;
- (id)buildRowsFromPlaylists:(id)arg1 sourcePlaylistID:(id)arg2;
- (void)loadPlaylists;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTracks:(id)arg1 sourcePlaylistID:(id)arg2;

@end

