//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GOONavigationStyleTabStop : NSObject
{
    long long _reference;
    double _offset;
}

+ (id)tabStopWithReference:(long long)arg1 offset:(double)arg2;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long reference; // @synthesize reference=_reference;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithReference:(long long)arg1 offset:(double)arg2;
- (id)init;

@end

