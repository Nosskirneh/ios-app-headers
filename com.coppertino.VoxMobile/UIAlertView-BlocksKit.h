//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@interface UIAlertView (BlocksKit)
+ (id)bk_alertViewWithTitle:(id)arg1 message:(id)arg2;
+ (id)bk_alertViewWithTitle:(id)arg1;
+ (id)bk_showAlertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (void)load;
@property(copy, nonatomic, setter=bk_setCancelBlock:) CDUnknownBlockType bk_cancelBlock;
- (CDUnknownBlockType)bk_handlerForButtonAtIndex:(long long)arg1;
- (void)bk_setHandler:(CDUnknownBlockType)arg1 forButtonAtIndex:(long long)arg2;
- (long long)bk_setCancelButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)bk_addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)bk_initWithTitle:(id)arg1 message:(id)arg2;

// Remaining properties
@property(copy, nonatomic, setter=bk_setDidDismissBlock:) CDUnknownBlockType bk_didDismissBlock; // @dynamic bk_didDismissBlock;
@property(copy, nonatomic, setter=bk_setDidShowBlock:) CDUnknownBlockType bk_didShowBlock; // @dynamic bk_didShowBlock;
@property(copy, nonatomic, setter=bk_SetShouldEnableFirstOtherButtonBlock:) CDUnknownBlockType bk_shouldEnableFirstOtherButtonBlock; // @dynamic bk_shouldEnableFirstOtherButtonBlock;
@property(copy, nonatomic, setter=bk_setWillDismissBlock:) CDUnknownBlockType bk_willDismissBlock; // @dynamic bk_willDismissBlock;
@property(copy, nonatomic, setter=bk_setWillShowBlock:) CDUnknownBlockType bk_willShowBlock; // @dynamic bk_willShowBlock;
@end
