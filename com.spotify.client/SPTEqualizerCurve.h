//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SPTEqualizerCurve : NSObject
{
    NSDictionary *_values;
}

+ (id)equalizerCurveWithValues:(id)arg1;
@property(copy, nonatomic) NSDictionary *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (double)valueForFrequency:(double)arg1;
- (void)setValue:(double)arg1 forFrequency:(double)arg2;
- (id)initWithValues:(id)arg1;

@end

