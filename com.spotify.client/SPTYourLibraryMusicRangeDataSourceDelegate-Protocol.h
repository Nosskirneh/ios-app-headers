//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTYourLibraryMusicRangeDataSource;

@protocol SPTYourLibraryMusicRangeDataSourceDelegate <NSObject>
- (void)rangeDataSource:(id <SPTYourLibraryMusicRangeDataSource>)arg1 error:(NSError *)arg2;
- (void)rangeDataSourceUpdated:(id <SPTYourLibraryMusicRangeDataSource>)arg1 itemsCountChanged:(_Bool)arg2;
@end

