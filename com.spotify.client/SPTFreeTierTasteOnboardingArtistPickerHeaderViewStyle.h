//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTFreeTierTasteOnboardingArtistPickerHeaderViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    double _labelHorizontalMargin;
}

@property(nonatomic) double labelHorizontalMargin; // @synthesize labelHorizontalMargin=_labelHorizontalMargin;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

