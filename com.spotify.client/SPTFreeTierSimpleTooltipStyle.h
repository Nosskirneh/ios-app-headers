//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierSimpleTooltipStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTFreeTierSimpleTooltipStyle : NSObject <SPTFreeTierSimpleTooltipStyle>
{
    _Bool hasRoundCorners;
    GLUELabelStyle *textLabelStyle;
    UIColor *backgroundColor;
}

@property(nonatomic) _Bool hasRoundCorners; // @synthesize hasRoundCorners;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) GLUELabelStyle *textLabelStyle; // @synthesize textLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

