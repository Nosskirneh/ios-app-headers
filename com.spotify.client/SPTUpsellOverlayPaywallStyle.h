//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString;

@interface SPTUpsellOverlayPaywallStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    GLUEButtonStyle *_actionButtonStyle;
}

@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

