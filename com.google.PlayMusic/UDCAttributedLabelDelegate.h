//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIAttributedLabelDelegate-Protocol.h"

@class NSString, SSOIdentity, SSOService, UIViewController;
@protocol GIDAuthBrowserOpener, UDCClearcutLoggingPerformer;

@interface UDCAttributedLabelDelegate : NSObject <NIAttributedLabelDelegate>
{
    SSOIdentity *_identity;
    SSOService *_SSOService;
    id <GIDAuthBrowserOpener> _authBrowserOpener;
    UIViewController<UDCClearcutLoggingPerformer> *_parentViewController;
}

- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldPresentActionSheet:(id)arg2 withTextCheckingResult:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)initWithIdentity:(id)arg1 SSOService:(id)arg2 authBrowserOpener:(id)arg3 parentViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

