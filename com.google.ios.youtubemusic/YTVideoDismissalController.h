//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCellDismissalController.h"

#import "YTDismissalFollowupViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTVideoDismissedViewDelegate-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTAlertView, YTDismissalFollowupView;
@protocol YTDismissalFollowUpViewModel, YTResponder;

@interface YTVideoDismissalController : YTCellDismissalController <YTDismissalFollowupViewDelegate, YTVideoDismissedViewDelegate, YTResponder>
{
    YTDismissalFollowupView *_reasonsView;
    YTAlertView *_reasonsAlertView;
    NSMutableArray *_thumbnailControllers;
    struct CGSize _outlineSize;
    struct CGSize _originalDismissableViewSize;
    long long _style;
    _Bool _didLogDismissalReasons;
    id <YTDismissalFollowUpViewModel> _reasonsRenderer;
}

@property(retain, nonatomic) id <YTDismissalFollowUpViewModel> reasonsRenderer; // @synthesize reasonsRenderer=_reasonsRenderer;
- (void).cxx_destruct;
- (void)loadThumbnails;
- (void)handleTapWithButtonRenderer:(id)arg1;
- (void)handleSelectedReasonEndpoint:(id)arg1;
- (void)didTapDismissalFollowupUndoActionWithRenderer:(id)arg1;
- (void)didTapDismissalFollowupSubmitActionWithRenderer:(id)arg1 reasonRenderer:(id)arg2;
- (void)didTapDismissalFollowupCancelActionWithRenderer:(id)arg1;
- (void)logDismissalFollowUpRenderer:(id)arg1;
- (void)resizeContainerAndReasonsView;
- (void)showReasons;
- (id)undoButtonRendererFromDismissalRenderer:(id)arg1;
- (id)undoButtonRendererFromNotificationRenderer:(id)arg1;
- (void)dismissInlineReasonsWithCompletion:(CDUnknownBlockType)arg1;
- (void)showReasonsModally;
- (void)showReasonsInline;
- (void)prepareReasonsViewWithModalStyle:(_Bool)arg1;
- (long long)style_regular;
- (long long)style_compact;
- (long long)style;
- (void)undoDismissCellAnimated:(_Bool)arg1;
- (void)showDismissalOnView:(id)arg1 animated:(_Bool)arg2;
- (void)updateContainerAndDismissedViewOnView:(id)arg1;
- (void)resizeCell;
- (_Bool)shouldUseDismissedSize;
- (void)setupDismissedView;
- (void)didTapDismissalFeedbackWithRenderer:(id)arg1;
- (void)didTapDismissalUndoWithRenderer:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

