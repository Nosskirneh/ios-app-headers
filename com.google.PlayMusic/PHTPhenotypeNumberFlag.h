//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTPhenotypeFlag.h"

@class NSNumber;

@interface PHTPhenotypeNumberFlag : PHTPhenotypeFlag
{
    NSNumber *_defaultValue;
    NSNumber *_testOverride;
}

@property(retain, nonatomic) NSNumber *testOverride; // @synthesize testOverride=_testOverride;
@property(readonly, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *value;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 flags:(id)arg3;

@end

