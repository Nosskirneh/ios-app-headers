//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKMediaQueueContainerMetadata, NSArray, NSString;

@interface GCKMediaQueueDataBuilder : NSObject
{
    long long _queueType;
    NSString *_queueID;
    NSString *_name;
    NSString *_entity;
    long long _repeatMode;
    GCKMediaQueueContainerMetadata *_containerMetadata;
    unsigned long long _startIndex;
    double _startTime;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) GCKMediaQueueContainerMetadata *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(copy, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *queueID; // @synthesize queueID=_queueID;
@property(nonatomic) long long queueType; // @synthesize queueType=_queueType;
- (void).cxx_destruct;
- (id)build;
- (id)initWithQueueData:(id)arg1;
- (id)initWithQueueType:(long long)arg1;

@end

