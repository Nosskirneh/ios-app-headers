//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTInAppMessageMessageRequester, SPTOnDemandTrialTestManager;

@interface SPTOnDemandTrialDialogsPresenter : NSObject
{
    id <SPTInAppMessageMessageRequester> _messageRequester;
    id <SPTOnDemandTrialTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTOnDemandTrialTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTInAppMessageMessageRequester> messageRequester; // @synthesize messageRequester=_messageRequester;
- (void).cxx_destruct;
- (void)triggerEndOfTrialEvent;
- (id)initWithMessageRequester:(id)arg1 testManager:(id)arg2;

@end

