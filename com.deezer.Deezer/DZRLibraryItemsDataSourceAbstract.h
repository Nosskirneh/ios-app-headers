//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDataSourceAbstract.h"

#import "DZRLibraryItemsDataSource-Protocol.h"
#import "DZRUserTopDataManagerDelegate-Protocol.h"
#import "_TtP6Deezer21DZRSortableController_-Protocol.h"

@class DZRUserTopDataManager, NSArray, NSMutableDictionary, NSString;
@protocol DZRDataSourceDelegate;

@interface DZRLibraryItemsDataSourceAbstract : DZRDataSourceAbstract <_TtP6Deezer21DZRSortableController_, DZRUserTopDataManagerDelegate, DZRLibraryItemsDataSource>
{
    _Bool _hasFilteredData;
    _Bool _loadingTopData;
    _Bool _updating;
    NSArray *_allLibraryItems;
    NSMutableDictionary *_indexPathesByFilteredSortedObjectUniqueID;
    NSArray *_sortedInSectionsAndFilteredLibraryItems;
    long long _selectedSortOption;
    NSArray *_sortedInSectionsLibraryItems;
    NSArray *_sectionTitles;
    NSArray *_sortOptions;
    NSString *_previousFilterText;
    NSString *_currentFilterText;
    DZRUserTopDataManager *_topDataManager;
}

@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic, getter=isLoadingTopData) _Bool loadingTopData; // @synthesize loadingTopData=_loadingTopData;
@property(retain, nonatomic) DZRUserTopDataManager *topDataManager; // @synthesize topDataManager=_topDataManager;
@property(copy, nonatomic) NSString *currentFilterText; // @synthesize currentFilterText=_currentFilterText;
@property(copy, nonatomic) NSString *previousFilterText; // @synthesize previousFilterText=_previousFilterText;
@property(nonatomic) _Bool hasFilteredData; // @synthesize hasFilteredData=_hasFilteredData;
@property(retain, nonatomic) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *sortedInSectionsLibraryItems; // @synthesize sortedInSectionsLibraryItems=_sortedInSectionsLibraryItems;
@property(nonatomic) long long selectedSortOption; // @synthesize selectedSortOption=_selectedSortOption;
@property(retain, nonatomic) NSArray *sortedInSectionsAndFilteredLibraryItems; // @synthesize sortedInSectionsAndFilteredLibraryItems=_sortedInSectionsAndFilteredLibraryItems;
@property(retain, nonatomic) NSMutableDictionary *indexPathesByFilteredSortedObjectUniqueID; // @synthesize indexPathesByFilteredSortedObjectUniqueID=_indexPathesByFilteredSortedObjectUniqueID;
@property(retain, nonatomic) NSArray *allLibraryItems; // @synthesize allLibraryItems=_allLibraryItems;
- (void).cxx_destruct;
- (void)userTopDataManager:(id)arg1 didChangeTopDataState:(long long)arg2 withData:(id)arg3;
- (long long)sortOptionsScreenType;
- (id)sortOptionAtIndex:(long long)arg1;
- (long long)numberOfSortOptions;
- (id)indexPathForItem:(id)arg1;
- (id)titleForHeaderAtSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)finalizeSortedSections;
- (void)updateIndexPathesAfterFilterSort;
- (void)notifyLibraryItemsUpdatedAndShouldScrollToTop:(_Bool)arg1;
- (void)filterLibraryItemsAndScrollToTop:(_Bool)arg1;
- (void)resetContentSortingToTopStateWithUserIDs:(id)arg1;
- (_Bool)ascending;
- (long long)splitMode;
- (id)propertiesToFilter;
- (id)propertiesToSort;
- (void)didSortItems;
- (void)sortAndFilterLibraryItems:(CDUnknownBlockType)arg1;
- (void)sortAndFilterLibraryItems;
- (long long)topDataType;
- (_Bool)canDisplayQuickScrollForSortOption:(long long)arg1;
- (_Bool)selectedSortOptionIsTop;
- (long long)indexOfItemInDefaultList:(id)arg1;
- (id)quickScrollSectionTitles;
- (void)filterLibraryItemsWithText:(id)arg1;
- (void)changeSortOption:(long long)arg1;
- (void)updateWithLibraryItems:(id)arg1;
- (void)refreshData;
- (_Bool)hasData;
- (_Bool)isFetching;
- (_Bool)isLoading;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <DZRDataSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

