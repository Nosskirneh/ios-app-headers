//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;
@protocol SPTFreeTierCollectionRangeDataLoader;

@protocol SPTFreeTierCollectionRangeDataLoaderDelegate <NSObject>
- (void)rangeDataLoader:(id <SPTFreeTierCollectionRangeDataLoader>)arg1 error:(NSError *)arg2;
- (void)rangeDataLoader:(id <SPTFreeTierCollectionRangeDataLoader>)arg1 didLoadItems:(NSArray *)arg2 forRange:(struct _NSRange)arg3;
@end

