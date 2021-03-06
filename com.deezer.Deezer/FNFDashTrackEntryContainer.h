//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FNFDashTrackEntryContainer : NSObject
{
    NSArray *_timelineEntries;
    NSString *_urlTemplate;
    struct vector<int, std::__1::allocator<int>> _sequenceLookup;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _relativeTimeLookup;
    int _sequenceCount;
    _Bool _hasRepetition;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_lookupEntryIndexForSequenceIndex:(int)arg1;
- (unsigned int)relativeStartTimeForEntryAtIndex:(int)arg1;
- (id)timelineEntryAtIndex:(int)arg1;
- (id)lastEntry;
- (id)firstEntry;
- (int)count;
- (id)initWithTimelineEntries:(id)arg1 mediaUrlTemplate:(id)arg2;

@end

