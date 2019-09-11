//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTModalPresentationController-Protocol.h"

@class NSString;
@protocol SPTInstrumentationModalPresentationMonitor, SPTPresenterViewControllerProvider;

@interface SPTModalPresentationControllerImplementation : NSObject <SPTModalPresentationController>
{
    id <SPTPresenterViewControllerProvider> _presenterProvider;
    id <SPTInstrumentationModalPresentationMonitor> _presentationMonitor;
}

@property(retain, nonatomic) id <SPTInstrumentationModalPresentationMonitor> presentationMonitor; // @synthesize presentationMonitor=_presentationMonitor;
@property(nonatomic) __weak id <SPTPresenterViewControllerProvider> presenterProvider; // @synthesize presenterProvider=_presenterProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageBarController:(id)arg1 willChangeToContentViewController:(id)arg2;
- (id)presentedViewControllersForViewControllerBeingDismissed:(id)arg1;
- (id)topPresenterViewController;
- (_Bool)dismissalForViewControllerWasCancelled:(id)arg1;
- (_Bool)presentationForViewControllerWasCancelled:(id)arg1;
- (void)dismissViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPresenterProvider:(id)arg1 modalPresentationMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

