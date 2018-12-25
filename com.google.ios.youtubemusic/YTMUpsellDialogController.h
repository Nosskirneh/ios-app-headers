//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTMAlertView, YTMTagManager, YTThumbnailController, YTUpsell;
@protocol YTMUpsellDialogControllerDelegate, YTResponder;

@interface YTMUpsellDialogController : NSObject <GOOAlertViewDelegate, YTResponder>
{
    YTMAlertView *_alertView;
    YTUpsell *_upsell;
    YTThumbnailController *_backgroundThumbController;
    YTThumbnailController *_foregroundThumbController;
    YTMTagManager *_tagManager;
    id <YTResponder> _upsellParentResponder;
    NSString *_videoID;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTMUpsellDialogControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMUpsellDialogControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)alertView;
- (void)didPressDismissButton;
- (void)didPressExtraButton;
- (void)didPressActionButton;
- (void)fillAlertViewWithUpsell:(id)arg1;
- (void)showUpsellDialogWithUpsell:(id)arg1 videoID:(id)arg2 toastType:(int)arg3 upsellParentResponder:(id)arg4;
- (void)alertViewDidDisappear:(id)arg1;
- (void)showUpsellDialogWithUpsellResponderEvent:(id)arg1;
- (void)showUpsellDialogWithUpsell:(id)arg1 upsellParentResponder:(id)arg2;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
