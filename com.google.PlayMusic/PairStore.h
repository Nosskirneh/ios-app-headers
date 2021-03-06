//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncIO-Protocol.h"

@protocol SyncIO;

@interface PairStore : NSObject <SyncIO>
{
    id <SyncIO> _storeA;
    unsigned long long _storeALength;
    id <SyncIO> _storeB;
    unsigned long long _writePosition;
    _Bool _closed;
}

+ (id)pairStoreWithStoreA:(id)arg1 storeALength:(unsigned long long)arg2 storeB:(id)arg3 writePosition:(unsigned long long)arg4;
- (void).cxx_destruct;
- (CDStruct_33dcf794)pairPositionsFromPosition:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (id)readFrom:(unsigned long long)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (id)initWithStoreA:(id)arg1 storeALength:(unsigned long long)arg2 storeB:(id)arg3 writePosition:(unsigned long long)arg4;

@end

