//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SaavnVC_n, UIActivityIndicatorView, UILabel, UITableView;

@interface LibraryEmptyState : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *data;
    NSMutableArray *artistData;
    _Bool noData;
    _Bool forArtists;
    _Bool triedArtistFetch;
    _Bool forShows;
    _Bool forDownloads;
    _Bool forSearch;
    _Bool forOfflineMode;
    UITableView *table;
    UIView *basicMessage;
    UILabel *searchMessage;
    UIActivityIndicatorView *spinner;
    CDUnknownBlockType actionTap;
    SaavnVC_n *parentVC;
}

@property(nonatomic) __weak SaavnVC_n *parentVC; // @synthesize parentVC;
- (void).cxx_destruct;
- (void)loadContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateSearchMessage:(id)arg1;
- (void)setAsOnline;
- (void)setAsOffline;
- (void)scrollToTop:(_Bool)arg1;
- (void)initForSearch;
- (void)handleAction;
- (void)buildBasicMessage:(id)arg1 withCopy:(id)arg2 withIcons:(id)arg3 andButton:(id)arg4 withAction:(CDUnknownBlockType)arg5;
- (id)buildLibraryHeader;
- (void)initTableView;
- (void)initForOffline;
- (void)initForDownloads;
- (void)showArtistsFallback;
- (void)parseTopArtists:(id)arg1;
- (void)fetchArtistData;
- (id)getBestMeta:(id)arg1;
- (void)initTitleStrings;
- (void)initData;
- (void)reloadViewData;
- (id)initForSearchFilter:(struct CGRect)arg1 inParent:(id)arg2;
- (id)initForDownloadsWithFrame:(struct CGRect)arg1 inParent:(id)arg2;
- (id)initForShowsWithFrame:(struct CGRect)arg1 inParent:(id)arg2;
- (id)initForArtistsWithFrame:(struct CGRect)arg1 inParent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 inParent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

