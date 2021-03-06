//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WMPTrackListModuleConfig-Protocol.h"

@class NSArray, NSNumber, NSString, WMPAlbumService, WMPSortAndRangeParameters;
@protocol WMPModuleDelegate;

@interface WMPTrackListModuleAlbumConfig : NSObject <WMPTrackListModuleConfig>
{
    id <WMPModuleDelegate> _moduleDelegate;
    NSString *_moduleTag;
    NSArray *_items;
    WMPAlbumService *_albumService;
    NSNumber *_albumId;
}

@property(retain, nonatomic) NSNumber *albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) WMPAlbumService *albumService; // @synthesize albumService=_albumService;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *moduleTag; // @synthesize moduleTag=_moduleTag;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate; // @synthesize moduleDelegate=_moduleDelegate;
- (void).cxx_destruct;
- (id)tableFooterView:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 forObject:(id)arg3 inTableView:(id)arg4 isLastRow:(_Bool)arg5;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 forObject:(id)arg3 inTableView:(id)arg4;
- (id)noContentMessage;
- (id)cellReuseIdentifierForManagedObject:(id)arg1;
- (id)highlightTrackId:(id)arg1 inObjects:(id)arg2;
- (id)mediaItemFromManagedObject:(id)arg1;
- (long long)type;
- (id)fetchedResultsControllerForDelegate:(id)arg1;
- (id)reloadItems;
- (void)loadMoreDataFromItemIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long displayedItemsCount;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WMPSortAndRangeParameters *sortAndRangeParameters;
@property(readonly) Class superclass;

@end

