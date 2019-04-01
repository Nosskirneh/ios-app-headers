//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface TTTLocationFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatter;
    unsigned long long _coordinateOrder;
    unsigned long long _coordinateStyle;
    unsigned long long _bearingStyle;
    unsigned long long _unitSystem;
}

@property(nonatomic) unsigned long long unitSystem; // @synthesize unitSystem=_unitSystem;
@property(nonatomic) unsigned long long bearingStyle; // @synthesize bearingStyle=_bearingStyle;
@property(nonatomic) unsigned long long coordinateStyle; // @synthesize coordinateStyle=_coordinateStyle;
@property(nonatomic) unsigned long long coordinateOrder; // @synthesize coordinateOrder=_coordinateOrder;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromVelocityFromLocation:(id)arg1 toLocation:(id)arg2 atSpeed:(double)arg3;
- (id)stringFromDistanceAndBearingFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)stringFromBearingFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)stringFromDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)stringFromSpeed:(double)arg1;
- (id)stringFromBearing:(double)arg1;
- (id)stringFromDistance:(double)arg1;
- (id)stringFromLocation:(id)arg1;
- (id)stringFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)init;

@end

