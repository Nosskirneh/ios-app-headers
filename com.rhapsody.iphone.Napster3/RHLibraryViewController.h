//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class NSMutableArray, NSString, UILabel, UITableView, UIView, _TtC7Napster12Dependencies, _TtC7Napster14DataController;

@interface RHLibraryViewController : RHViewController
{
    _TtC7Napster12Dependencies *_dependencies;
    _TtC7Napster14DataController *_dataController;
    UIView *_headerView;
    UILabel *_titleLabel;
    UITableView *_tableView;
    NSString *_cellNib;
    NSMutableArray *_availableRowTypes;
}

@property(retain, nonatomic) NSMutableArray *availableRowTypes; // @synthesize availableRowTypes=_availableRowTypes;
@property(retain, nonatomic) NSString *cellNib; // @synthesize cellNib=_cellNib;
@property __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) _TtC7Napster14DataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
- (void).cxx_destruct;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (void)createMenuItems;
- (void)showBookmarks;
- (void)showFavoriteTracks:(_Bool)arg1;
- (void)showFavoriteTracks;
- (void)showQueue;
- (void)showHistory;
- (void)showAlbum:(id)arg1;
- (void)showStations;
- (void)showAlbums;
- (void)showArtists;
- (void)showPlaylist:(id)arg1;
- (void)showPlaylistsAnimated:(_Bool)arg1;
- (void)clearSelection;
- (void)didFailSessionValidation:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)didSignIn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1;

@end

