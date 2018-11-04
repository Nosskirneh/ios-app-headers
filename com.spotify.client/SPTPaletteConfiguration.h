//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableSet;

@interface SPTPaletteConfiguration : NSObject <NSCopying>
{
    NSMutableSet *_targets;
    unsigned long long _maxColorCount;
    NSMutableArray *_filters;
}

+ (id)new;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(nonatomic) unsigned long long maxColorCount; // @synthesize maxColorCount=_maxColorCount;
@property(readonly, nonatomic) NSMutableSet *targets; // @synthesize targets=_targets;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTargets:(id)arg1 maxColorCount:(unsigned long long)arg2 filters:(id)arg3;
- (id)init;

@end

