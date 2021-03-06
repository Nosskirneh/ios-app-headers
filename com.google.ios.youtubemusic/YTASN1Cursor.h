//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTASN1Tag;

@interface YTASN1Cursor : NSObject
{
    char *_start;
    char *_end;
    char *_currentPosition;
}

+ (id)cursorWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)cursorWithData:(id)arg1;
@property(readonly, nonatomic) char *currentPosition; // @synthesize currentPosition=_currentPosition;
- (id)description;
- (long long)bytesRemaining;
@property(readonly, nonatomic) long long length;
- (void)reset;
@property(readonly, nonatomic) _Bool hasOneObject;
@property(readonly, nonatomic) _Bool hasMore;
- (id)advanceByLength:(long long)arg1;
- (id)nextObject;
- (id)peakNextObject;
@property(readonly, nonatomic) YTASN1Tag *peakNextTag;
- (id)initWithBytes:(char *)arg1 length:(long long)arg2;
- (id)initWithData:(id)arg1;

@end

