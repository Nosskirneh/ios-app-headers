//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMWStateProtocol-Protocol.h"
#import "IDTableDelegate-Protocol.h"
#import "IDViewDelegate-Protocol.h"

@class DZOFetchCallback, IDLabel, IDTable, IDView, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol StatePlaylistsViewControllerDelegate;

@interface StatePlaylistsViewController : NSObject <IDViewDelegate, IDTableDelegate, BMWStateProtocol>
{
    int _source;
    id <StatePlaylistsViewControllerDelegate> _delegate;
    IDView *_view;
    IDTable *_tableView;
    IDLabel *_statusLabel;
    NSArray *_onlinePlaylists;
    NSArray *_offlinePlaylists;
    NSMutableDictionary *_coversDownloadIds;
    NSMutableArray *_rowIndexesWithDisplayedCovers;
    NSOperationQueue *_offlineCoversQueue;
    DZOFetchCallback *_fetchCallback;
}

@property(retain) DZOFetchCallback *fetchCallback; // @synthesize fetchCallback=_fetchCallback;
@property int source; // @synthesize source=_source;
@property(retain, nonatomic) NSOperationQueue *offlineCoversQueue; // @synthesize offlineCoversQueue=_offlineCoversQueue;
@property(retain, nonatomic) NSMutableArray *rowIndexesWithDisplayedCovers; // @synthesize rowIndexesWithDisplayedCovers=_rowIndexesWithDisplayedCovers;
@property(retain, nonatomic) NSMutableDictionary *coversDownloadIds; // @synthesize coversDownloadIds=_coversDownloadIds;
@property(retain, nonatomic) NSArray *offlinePlaylists; // @synthesize offlinePlaylists=_offlinePlaylists;
@property(retain, nonatomic) NSArray *onlinePlaylists; // @synthesize onlinePlaylists=_onlinePlaylists;
@property(retain, nonatomic) IDLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) IDTable *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IDView *view; // @synthesize view=_view;
@property(nonatomic) id <StatePlaylistsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stateCanLocalize;
- (void)stateCanDispose;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)displayPlaylists;
- (void)reloadData;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 source:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
