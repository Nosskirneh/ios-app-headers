//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WMPTrackListModuleConfig-Protocol.h"

@class NSArray, NSNumber, NSString, WMPImageService, WMPSortAndRangeParameters, WMPTrackService;
@protocol WMPModuleDelegate;

@interface WMPTrackListModuleArtistConfig : NSObject <WMPTrackListModuleConfig>
{
    id <WMPModuleDelegate> _moduleDelegate;
    NSString *_moduleTag;
    unsigned long long _displayedItemsCount;
    WMPTrackService *_trackService;
    WMPImageService *_imageService;
    NSNumber *_artistId;
}

@property(retain, nonatomic) NSNumber *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) WMPImageService *imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) WMPTrackService *trackService; // @synthesize trackService=_trackService;
@property(nonatomic) unsigned long long displayedItemsCount; // @synthesize displayedItemsCount=_displayedItemsCount;
@property(retain, nonatomic) NSString *moduleTag; // @synthesize moduleTag=_moduleTag;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate; // @synthesize moduleDelegate=_moduleDelegate;
- (void).cxx_destruct;
- (void)fullScreen:(id)arg1;
- (void)loadMoreWithSortAndRangeParameters:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 forObject:(id)arg3 inTableView:(id)arg4;
- (id)noContentMessage;
- (id)cellReuseIdentifierForManagedObject:(id)arg1;
- (id)mediaItemFromManagedObject:(id)arg1;
- (long long)type;
- (id)fetchedResultsControllerForDelegate:(id)arg1;
- (void)loadMoreDataFromItemIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *items;
@property(retain, nonatomic) WMPSortAndRangeParameters *sortAndRangeParameters;
@property(readonly) Class superclass;

@end

