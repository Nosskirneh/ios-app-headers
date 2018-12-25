//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTSurveyPromosheetDelegate-Protocol.h"

@class GIMMe, NSString, YTISurveyTriggerRenderer, YTSurveyPromosheet;
@protocol YTResponder, YTSurveyControllerDelegate;

@interface YTSurveyController : NSObject <YTPageStyleProvider, YTSurveyPromosheetDelegate>
{
    YTSurveyPromosheet *_surveyPromosheet;
    id <YTResponder> _surveyParentResponder;
    _Bool _surveyPresenting;
    GIMMe *_gimme;
    id <YTSurveyControllerDelegate> _delegate;
    YTISurveyTriggerRenderer *_renderer;
}

@property(retain, nonatomic) YTISurveyTriggerRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <YTSurveyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long pageStyle;
- (id)surveyFirstResponder;
- (void)dismissSurveyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)logVisibilityAndImpressionsForSurveyTriggerRenderer:(id)arg1 firstResponder:(id)arg2;
- (void)userDidExpandSurvey;
- (void)userDidDismissSurvey;
- (void)userDidSelectSurveyOptionsWithCommands:(id)arg1;
- (void)clearState;
- (void)showSurveyWithRenderer:(id)arg1 surveyParentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
