//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEFeatureController-Protocol.h"

@protocol GLUETheme;

@interface GLUEThemeFeatureController : NSObject <GLUEFeatureController>
{
    _Bool _motionEnabled;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)enableModernFeatures;
- (void)resetRolloutStatuses;
- (id)initWithTheme:(id)arg1;

@end

