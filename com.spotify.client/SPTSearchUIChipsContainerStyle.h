//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SPTSearchUIChipViewStyle;

@interface SPTSearchUIChipsContainerStyle : NSObject <NSCopying>
{
    SPTSearchUIChipViewStyle *_chipStyle;
    double _spacing;
}

@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(copy, nonatomic) SPTSearchUIChipViewStyle *chipStyle; // @synthesize chipStyle=_chipStyle;
- (void).cxx_destruct;
- (_Bool)isEqualToChipsContainerStyle:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithChipStyle:(id)arg1 spacing:(double)arg2;

@end

