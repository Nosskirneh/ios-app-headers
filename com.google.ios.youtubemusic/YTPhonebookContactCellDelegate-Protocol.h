//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTPhonebookContactCell;

@protocol YTPhonebookContactCellDelegate <NSObject>
- (_Bool)bottomSheetAvailableForPhonebookContactCell:(YTPhonebookContactCell *)arg1;
- (_Bool)isInvitedPhonebookContactCell:(YTPhonebookContactCell *)arg1;
- (void)phonebookContactCell:(YTPhonebookContactCell *)arg1 showBottomSheetWithSuccessBlock:(void (^)(void))arg2 failureBlock:(void (^)(void))arg3;
- (void)phonebookContactCell:(YTPhonebookContactCell *)arg1 inviteWithSuccessBlock:(void (^)(void))arg2 failureBlock:(void (^)(void))arg3;
@end

