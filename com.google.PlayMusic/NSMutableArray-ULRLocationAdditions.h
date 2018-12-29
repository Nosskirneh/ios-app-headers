//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (ULRLocationAdditions)
- (void)ulr_removeExpeditedLocations;
- (void)ulr_removeOldestLocationsUntilArrayIsWithinSizeLimit:(unsigned long long)arg1;
- (void)ulr_spaceLocationsAtMinimumTimeInterval:(double)arg1 candidatesCallback:(CDUnknownBlockType)arg2;
- (void)ulr_sortByLocationTimestamp;
- (void)ulr_removeLocationsNewerThanDate:(id)arg1;
- (void)ulr_removeLocationsOlderThanDate:(id)arg1;
@end
