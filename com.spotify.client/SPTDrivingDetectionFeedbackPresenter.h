//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"

@class NSString, SPTDrivingDetectionFeedbackPresentationToken, SPTDrivingStateTestManager, UIWindow;
@protocol GLUETheme, SPTSlateBuilder, SPTSlateManager;

@interface SPTDrivingDetectionFeedbackPresenter : NSObject <SPTSlateDataSource, SPTSlateDelegate>
{
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilder> _slateBuilder;
    UIWindow *_window;
    id <GLUETheme> _glueTheme;
    SPTDrivingStateTestManager *_testManager;
    SPTDrivingDetectionFeedbackPresentationToken *_currentPresentationToken;
}

@property(retain, nonatomic) SPTDrivingDetectionFeedbackPresentationToken *currentPresentationToken; // @synthesize currentPresentationToken=_currentPresentationToken;
@property(readonly, nonatomic) SPTDrivingStateTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) id <SPTSlateBuilder> slateBuilder; // @synthesize slateBuilder=_slateBuilder;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (void)slateWillDismiss:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (void)completeCurrentPresentationWithResponse:(unsigned long long)arg1 dismiss:(_Bool)arg2;
- (id)presentFeedbackOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureSlateBuilder:(id)arg1;
- (id)initWithSlateManager:(id)arg1 slateBuilder:(id)arg2 glueTheme:(id)arg3 window:(id)arg4 testManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

