//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTMinimizedViewController.h"

#import "GOOBottomSheetControllerDelegate-Protocol.h"

@class NSString, SKTBottomSheetViewController;

@interface SKTBottomSheetContentController : SKTMinimizedViewController <GOOBottomSheetControllerDelegate>
{
    SKTBottomSheetViewController *_bottomSheet;
}

@property(nonatomic) __weak SKTBottomSheetViewController *bottomSheet; // @synthesize bottomSheet=_bottomSheet;
- (void).cxx_destruct;
- (double)footerVerticalMargin;
- (void)updatePreferredContentSize;
- (double)contentHeightWithPeekFooter;
- (void)attemptToDismissShareSheet;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (void)dismissFromPresentingViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)cornerRadius;
- (struct UIEdgeInsets)edgeInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

