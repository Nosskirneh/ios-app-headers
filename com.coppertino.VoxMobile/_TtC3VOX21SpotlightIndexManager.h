//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _TtC3VOX21SpotlightIndexManager : NSObject
{
    // Error parsing type: , name: index
    // Error parsing type: , name: ctx
    // Error parsing type: , name: inBatch
    // Error parsing type: , name: batchCount
    // Error parsing type: , name: batchEndDebouncer
    // Error parsing type: , name: indexingQueue
    // Error parsing type: , name: placeholderImageData.storage
}

+ (id)itemIDFromSpotlightIndexAcivityWithActivity:(id)arg1;
+ (_Bool)isSpotlightIndexActivityWithActivity:(id)arg1;
+ (_Bool)isSpotlightIndexAvailable;
+ (id)NeedReindexWholeDBNoteName;
+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (void)removeAllIndicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromIndexWithIndexableItem:(id)arg1;
- (void)addToIndexWithIndexableItem:(id)arg1;
- (void)initializeWithManagedObjectContextWithCtx:(id)arg1;
- (id)init;
@property(nonatomic) _Bool initialIndexPerformed;

@end

