//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTArtistAboutMonthlyListenersViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_countLabelStyle;
    GLUELabelStyle *_descriptionLabelStyle;
}

@property(copy, nonatomic) GLUELabelStyle *descriptionLabelStyle; // @synthesize descriptionLabelStyle=_descriptionLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *countLabelStyle; // @synthesize countLabelStyle=_countLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

