//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGListMoveIndex : NSObject
{
    long long _from;
    long long _to;
}

@property(readonly, nonatomic) long long to; // @synthesize to=_to;
@property(readonly, nonatomic) long long from; // @synthesize from=_from;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFrom:(long long)arg1 to:(long long)arg2;

@end

