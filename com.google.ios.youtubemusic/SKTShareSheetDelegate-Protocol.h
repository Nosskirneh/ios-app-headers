//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTPeoplePickerDelegate-Protocol.h"

@class SKTSelectedSendTargets, UIViewController;
@protocol SKTShareSheet;

@protocol SKTShareSheetDelegate <SKTPeoplePickerDelegate>

@optional
- (void)shareSheetPreferredSizeDidChangedFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)shareSheetDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)fullScreenViewControllerDidAppear:(UIViewController<SKTShareSheet> *)arg1;
- (unsigned long long)shareSheetShouldCancelSendKitWorkflow:(UIViewController<SKTShareSheet> *)arg1;
- (unsigned long long)shareSheet:(UIViewController<SKTShareSheet> *)arg1 shouldFinishPickingTargets:(SKTSelectedSendTargets *)arg2;
@end

