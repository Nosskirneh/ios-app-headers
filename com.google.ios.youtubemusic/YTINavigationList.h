//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTINavigationList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int currentIndex; // @dynamic currentIndex;
@property(nonatomic) _Bool hasCurrentIndex; // @dynamic hasCurrentIndex;
@property(retain, nonatomic) NSMutableArray *navigationListEntriesArray; // @dynamic navigationListEntriesArray;
@property(readonly, nonatomic) unsigned long long navigationListEntriesArray_Count; // @dynamic navigationListEntriesArray_Count;
@property(retain, nonatomic) NSMutableArray *upNextEntriesArray; // @dynamic upNextEntriesArray;
@property(readonly, nonatomic) unsigned long long upNextEntriesArray_Count; // @dynamic upNextEntriesArray_Count;

@end

