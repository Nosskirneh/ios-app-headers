//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCornerTreatment.h"

@interface MDCCurvedCornerTreatment : MDCCornerTreatment
{
    struct CGSize _size;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 andCurve:(struct CGSize)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1 forViewSize:(struct CGSize)arg2;
- (id)pathGeneratorForCornerWithAngle:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;

@end

