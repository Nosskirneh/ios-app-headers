//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZREqualizerImplementation-Protocol.h"

@protocol DZREqualizerImplementation;

@interface DZRParametricEqualizer : NSObject <DZREqualizerImplementation>
{
    id <DZREqualizerImplementation> _implementation;
}

@property(retain, nonatomic) id <DZREqualizerImplementation> implementation; // @synthesize implementation=_implementation;
- (void).cxx_destruct;
- (void)setGain:(float)arg1 forBandAtIndex:(unsigned long long)arg2;
@property(nonatomic, getter=isActive) _Bool active;
- (id)initWithImplementation:(id)arg1;

@end

