//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeedTooltipManager-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTFeedLogger;
@protocol SPTLocalSettings, SPTTooltipPresentationManager;

@interface SPTFeedTooltipManagerImplementation : NSObject <UIGestureRecognizerDelegate, SPTFeedTooltipManager>
{
    id <SPTLocalSettings> _localSettings;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    SPTFeedLogger *_feedLogger;
}

@property(retain, nonatomic) SPTFeedLogger *feedLogger; // @synthesize feedLogger=_feedLogger;
@property(retain, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)canDisplayTooltip;
- (void)dismissTooltip;
- (void)presentTooltipFromAnchorView:(id)arg1;
- (void)presentTooltipIfNeededFromAnchorView:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 tooltipPresentationManager:(id)arg2 feedLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

