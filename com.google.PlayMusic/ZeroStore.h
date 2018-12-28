//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncIO-Protocol.h"

@interface ZeroStore : NSObject <SyncIO>
{
    unsigned long long _length;
}

+ (id)zeroStore;
- (_Bool)closeWithError:(id *)arg1;
- (id)readFrom:(unsigned long long)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (id)init;

@end

