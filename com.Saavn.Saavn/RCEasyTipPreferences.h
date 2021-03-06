//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RCEasyTipAnimating, RCEasyTipDrawing, RCEasyTipPositioning;

@interface RCEasyTipPreferences : NSObject
{
    _Bool _shouldDismissOnTouchOutside;
    RCEasyTipDrawing *_drawing;
    RCEasyTipPositioning *_positioning;
    RCEasyTipAnimating *_animating;
}

@property(nonatomic) _Bool shouldDismissOnTouchOutside; // @synthesize shouldDismissOnTouchOutside=_shouldDismissOnTouchOutside;
@property(retain, nonatomic) RCEasyTipAnimating *animating; // @synthesize animating=_animating;
@property(retain, nonatomic) RCEasyTipPositioning *positioning; // @synthesize positioning=_positioning;
@property(retain, nonatomic) RCEasyTipDrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (id)initWithDefaultPreferences;

@end

