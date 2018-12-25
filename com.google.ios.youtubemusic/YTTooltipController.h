//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, GIMMe, NSMapTable, YTHintController, YTHotConfig;

@interface YTTooltipController : NSObject
{
    NSMapTable *_viewMap;
    NSMapTable *_viewReverseMap;
    NSMapTable *_responderMap;
    NSMapTable *_tooltipMap;
    CADisplayLink *_displayLink;
    YTHotConfig *_hotConfig;
    YTHintController *_hintController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateFromDisplayLink:(id)arg1;
- (void)startDisplayLinkIfNecessary;
- (id)tooltipForTargetID:(id)arg1;
- (id)targetIDForView:(id)arg1;
- (id)viewForTargetID:(id)arg1;
- (void)registerTooltipRenderer:(id)arg1 forTargetID:(id)arg2;
- (void)registerView:(id)arg1 firstResponder:(id)arg2 forTargetID:(id)arg3;
- (_Bool)isEnabled;
- (void)registerTooltipRenderer:(id)arg1;
- (void)unregisterByTargetID:(id)arg1;
- (void)unregisterTargetView:(id)arg1;
- (void)registerView:(id)arg1 firstResponder:(id)arg2 withRenderer:(id)arg3;
- (id)init;

@end

