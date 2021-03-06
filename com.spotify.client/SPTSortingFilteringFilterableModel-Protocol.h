//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SPTSortingFilteringFilterableModel <NSObject>
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
@property(copy, nonatomic) NSArray *activeFilters;
@property(readonly, copy, nonatomic) NSArray *availableFilters;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
@end

