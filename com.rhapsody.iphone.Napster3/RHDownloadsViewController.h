//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, UILabel, UITableView, UIView, _TtC7Napster14DataController;

@interface RHDownloadsViewController : RHViewController <NSFetchedResultsControllerDelegate>
{
    _TtC7Napster14DataController *_dataController;
    NSFetchedResultsController *_fetchedLeasesController;
    UIView *_headerView;
    UILabel *_titleLabel;
    UITableView *_tableView;
    NSString *_cellNib;
    NSString *_tvNib;
}

@property(retain, nonatomic) NSString *tvNib; // @synthesize tvNib=_tvNib;
@property(retain, nonatomic) NSString *cellNib; // @synthesize cellNib=_cellNib;
@property __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSFetchedResultsController *fetchedLeasesController; // @synthesize fetchedLeasesController=_fetchedLeasesController;
@property(retain, nonatomic) _TtC7Napster14DataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (id)dependencies;
- (id)metricsScreenName;
- (void)showDownloading;
- (void)showTracks;
- (void)showFavoriteTracks:(_Bool)arg1;
- (void)showFavoriteTracks;
- (void)showAlbum:(id)arg1;
- (void)showAlbums;
- (id)showArtistsAnimated:(_Bool)arg1;
- (void)showPlaylist:(id)arg1;
- (void)showPlaylistsAnimated:(_Bool)arg1;
- (void)clearSelection;
- (void)setSelectedRow:(long long)arg1;
- (long long)selectedRow;
- (void)didFailSessionValidation:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

