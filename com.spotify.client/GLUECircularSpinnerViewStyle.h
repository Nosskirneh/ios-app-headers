//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface GLUECircularSpinnerViewStyle : NSObject <GLUEStyle>
{
    double _size;
    double _borderWidth;
    UIColor *_borderColor;
}

@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCircularSpinnerViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

