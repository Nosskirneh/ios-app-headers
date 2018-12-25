//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXSmartPairingBaseViewController.h"

#import "MDXSmartPairingSectionControllerDelegate-Protocol.h"

@class MDXScreenManager, NSMutableArray, NSString;

@interface MDXSmartPairingTVCodeViewController : MDXSmartPairingBaseViewController <MDXSmartPairingSectionControllerDelegate>
{
    MDXScreenManager *_screenManager;
    NSMutableArray *_sectionControllers;
}

- (void).cxx_destruct;
- (void)createGetTVCodeController;
- (void)createInputTVCodeController;
- (void)MDXSmartPairingDeviceCell:(id)arg1 willConnectToScreen:(id)arg2;
- (void)didTapCell:(id)arg1 withNavEndpoint:(id)arg2;
- (void)viewDidLoad;
- (id)initWithScreenManager:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
