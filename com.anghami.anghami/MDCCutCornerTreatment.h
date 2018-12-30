//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCornerTreatment.h"

@interface MDCCutCornerTreatment : MDCCornerTreatment
{
    double _cut;
}

@property(nonatomic) double cut; // @synthesize cut=_cut;
- (_Bool)isEqual:(id)arg1;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 andCut:(double)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 forViewSize:(struct CGSize)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCut:(double)arg1;
- (id)init;

@end
