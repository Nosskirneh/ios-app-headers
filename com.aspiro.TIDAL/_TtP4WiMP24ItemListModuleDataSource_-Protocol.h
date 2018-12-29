//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, WMPSortAndRangeParameters;

@protocol _TtP4WiMP24ItemListModuleDataSource_ <UITableViewDataSource>
- (void)reloadDataSource;
- (NSIndexPath *)indexPathForItem:(id)arg1;
- (NSArray *)items;
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (long long)itemsCount;
@property(nonatomic) long long moduleFormat;

@optional
- (void)loadMoreLightweightItemsFrom:(NSString *)arg1 sortAndRangeParams:(WMPSortAndRangeParameters *)arg2 completionHandler:(void (^)(_Bool))arg3;
@end
