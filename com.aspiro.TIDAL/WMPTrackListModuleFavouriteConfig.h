//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WMPTrackListModuleConfig-Protocol.h"

@class NSArray, NSNumber, NSString, WMPImageService, WMPSortAndRangeParameters, WMPTrackService;
@protocol WMPModuleDelegate;

@interface WMPTrackListModuleFavouriteConfig : NSObject <WMPTrackListModuleConfig>
{
    WMPSortAndRangeParameters *_sortAndRangeParameters;
    id <WMPModuleDelegate> _moduleDelegate;
    NSString *_moduleTag;
    WMPTrackService *_trackService;
    WMPImageService *_imageService;
    NSNumber *_userId;
}

@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) WMPImageService *imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) WMPTrackService *trackService; // @synthesize trackService=_trackService;
@property(retain, nonatomic) NSString *moduleTag; // @synthesize moduleTag=_moduleTag;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate; // @synthesize moduleDelegate=_moduleDelegate;
@property(retain, nonatomic) WMPSortAndRangeParameters *sortAndRangeParameters; // @synthesize sortAndRangeParameters=_sortAndRangeParameters;
- (void).cxx_destruct;
- (_Bool)shouldHighlight:(id)arg1;
- (void)fullScreen:(id)arg1;
- (id)tableHeaderView:(id)arg1 withTitleModule:(id)arg2;
- (id)titleModule;
- (void)loadMoreWithSortAndRangeParameters:(id)arg1;
- (id)mediaItemFromManagedObject:(id)arg1;
- (CDUnknownBlockType)createSortingMenu;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 forObject:(id)arg3 inTableView:(id)arg4;
- (id)noContentIcon;
- (id)noContentApiPath;
- (id)noContentButtonText;
- (id)noContentMessage;
- (id)cellReuseIdentifierForManagedObject:(id)arg1;
- (long long)type;
- (id)fetchedResultsControllerForDelegate:(id)arg1;
- (void)loadMoreDataFromItemIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long displayedItemsCount;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *items;
@property(readonly) Class superclass;

@end

