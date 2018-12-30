//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, UIViewController;

@interface ANGWebManager : NSObject <SFSafariViewControllerDelegate>
{
    UIViewController *_presentedViewController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (_Bool)isURLValid:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
@property(readonly, nonatomic) _Bool isWebViewPresented;
- (void)dismissCurrentModalWebViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushWebViewWithURL:(id)arg1 title:(id)arg2 inNavigationController:(id)arg3;
- (void)presentWebViewWithURL:(id)arg1 title:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

