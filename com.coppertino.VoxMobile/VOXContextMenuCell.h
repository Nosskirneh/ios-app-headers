//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "VOXContextMenuFacadeDelegate-Protocol.h"
#import "VOXContextMenuSlideProtocol-Protocol.h"

@class NSString, UIView, VOXContextMenuFacade;

@interface VOXContextMenuCell : UITableViewCell <VOXContextMenuFacadeDelegate, VOXContextMenuSlideProtocol>
{
    _Bool _opened;
    UIView *_slideView;
    UIView *_leftView;
    UIView *_rightView;
    UIView *_highlightView;
    VOXContextMenuFacade *_contextMenuFacade;
}

@property(readonly, nonatomic) VOXContextMenuFacade *contextMenuFacade; // @synthesize contextMenuFacade=_contextMenuFacade;
@property(readonly, nonatomic, getter=isOpened) _Bool opened; // @synthesize opened=_opened;
@property(nonatomic) __weak UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) __weak UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) __weak UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak UIView *slideView; // @synthesize slideView=_slideView;
- (void).cxx_destruct;
- (void)closeContextMenuIfNeeded;
- (void)contextMenuFacadeDidActivateRightSide:(id)arg1;
- (void)contextMenuFacadeDidActivateLeftSide:(id)arg1;
- (void)gestureRecognizer:(id)arg1 didFinishWithMode:(unsigned long long)arg2;
- (void)applyAnimationToView:(id)arg1 withFrame:(struct CGRect)arg2 velocity:(struct CGRect)arg3;
- (void)setOpened:(_Bool)arg1 animated:(_Bool)arg2;
- (void)interactionEnabled:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
