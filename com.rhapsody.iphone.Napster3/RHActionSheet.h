//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP7Napster11ActionSheet_-Protocol.h"

@class NSMutableArray, NSString, RHTitleBlock, UIAlertController;

@interface RHActionSheet : NSObject <_TtP7Napster11ActionSheet_>
{
    NSString *_title;
    NSString *_subtitle;
    RHTitleBlock *_cancelAction;
    RHTitleBlock *_destructiveAction;
    NSMutableArray *_buttonTitleTargetActions;
    UIAlertController *_actionSheet;
}

@property(retain, nonatomic) UIAlertController *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSMutableArray *buttonTitleTargetActions; // @synthesize buttonTitleTargetActions=_buttonTitleTargetActions;
@property(retain, nonatomic) RHTitleBlock *destructiveAction; // @synthesize destructiveAction=_destructiveAction;
@property(retain, nonatomic) RHTitleBlock *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)presentFromViewController:(id)arg1 sourceView:(id)arg2;
- (void)showCommonInit;
- (unsigned long long)numberOfButtonTitles;
- (long long)addButtonAttributedTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)addButtonTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)addButtonTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasActions;
- (void)setDestructiveButtonTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setCancelButtonTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1;

@end
