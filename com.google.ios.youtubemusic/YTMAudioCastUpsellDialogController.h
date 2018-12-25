//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTICommand, YTMAlertView, YTThumbnailController;
@protocol YTResponder;

@interface YTMAudioCastUpsellDialogController : NSObject <GOOAlertViewDelegate, YTResponder, YTGraftingViewController>
{
    YTMAlertView *_alertView;
    YTThumbnailController *_backgroundThumbController;
    YTThumbnailController *_foregroundThumbController;
    id <YTResponder> _upsellParentResponder;
    YTICommand *_navEndpoint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)alertView;
- (void)didPressDismissButton;
- (void)didPressActionButton;
- (id)navEndpoint;
- (void)fillAlertViewWithAudioCastUpsell;
- (void)alertViewDidDisappear:(id)arg1;
- (void)showAudioCastUpsellDialogWithUpsellParentResponder:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

