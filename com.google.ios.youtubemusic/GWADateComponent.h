//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWADateComponent : NSObject
{
    unsigned long long _type;
    unsigned long long _maxLength;
    unsigned long long _maxValue;
}

@property(readonly, nonatomic) unsigned long long maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 maxValue:(unsigned long long)arg3;

@end

