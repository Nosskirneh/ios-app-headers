//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VisibleLayoutSearch : NSObject
{
    NSArray *_attributes;
    double *_attributeYStart;
    double *_attributeYEnd;
}

@property(readonly, nonatomic) double *attributeYEnd; // @synthesize attributeYEnd=_attributeYEnd;
@property(readonly, nonatomic) double *attributeYStart; // @synthesize attributeYStart=_attributeYStart;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)visibleLayoutAttributesInRect:(struct CGRect)arg1 withStartIndex:(unsigned long long)arg2;
- (unsigned long long)startIndexForRect:(struct CGRect)arg1;
- (void)calculateAttributeStartAndEnds:(id)arg1;
- (id)visibleLayoutAttributesInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithSortedAttributes:(id)arg1;

@end

