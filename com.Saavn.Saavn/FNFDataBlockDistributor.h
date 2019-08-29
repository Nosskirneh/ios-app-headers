//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBDataBlockConsumer;

@interface FNFDataBlockDistributor : NSObject
{
    struct mutex _lock;
    struct map<FBDataSegment, NSData *, cmpOfDataSegment, std::__1::allocator<std::__1::pair<const FBDataSegment, NSData *>>> _dataSegments;
    _Bool activeHeads[3];
    unsigned long long starvingHeads[3];
    unsigned long long heads[3];
    char *stitches[3];
    id <FBDataBlockConsumer> _consumer;
}

@property(nonatomic) __weak id <FBDataBlockConsumer> consumer; // @synthesize consumer=_consumer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)availableOffsetForHeadType:(unsigned long long)arg1;
- (unsigned long long)offsetForHeadType:(unsigned long long)arg1;
- (const char *)_unlockedBytesAtHead:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (const char *)bytesAtHead:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (void)moveHeadTo:(unsigned long long)arg1 withHeadType:(unsigned long long)arg2;
- (void)removeHeadType:(unsigned long long)arg1;
- (void)addHeadType:(unsigned long long)arg1 withOffset:(unsigned long long)arg2;
- (void)deliverData:(id)arg1 withOffset:(unsigned long long)arg2;
- (id)description;

@end

