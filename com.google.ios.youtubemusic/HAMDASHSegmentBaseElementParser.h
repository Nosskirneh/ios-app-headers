//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMDASHBaseElementParser.h"

@class HAMRange;

@interface HAMDASHSegmentBaseElementParser : HAMDASHBaseElementParser
{
    HAMRange *_initializationRange;
    HAMRange *_indexRange;
}

@property(readonly, nonatomic) HAMRange *indexRange; // @synthesize indexRange=_indexRange;
@property(readonly, nonatomic) HAMRange *initializationRange; // @synthesize initializationRange=_initializationRange;
- (void).cxx_destruct;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)startElementWithName:(const char *)arg1;

@end

