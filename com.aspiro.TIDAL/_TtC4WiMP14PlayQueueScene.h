//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class NSLayoutConstraint, UILabel, UIView, WMPReorderTableView;

@interface _TtC4WiMP14PlayQueueScene : WMPAbstractScene
{
    // Error parsing type: , name: kNormalCellHeight
    // Error parsing type: , name: kCurrentCellHeaderHeight
    // Error parsing type: , name: kCurrentCellFooterHeight
    // Error parsing type: , name: currentTableCell
    // Error parsing type: , name: tableView
    // Error parsing type: , name: basicUserView
    // Error parsing type: , name: basicUserMessageTitleLabel
    // Error parsing type: , name: basicUserMessageInfoLabel
    // Error parsing type: , name: tableTopConstraint
    // Error parsing type: , name: tableHeaderView
}

+ (id)getInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didChangePlayQueue:(id)arg1;
- (double)getOverlayViewHeight;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak NSLayoutConstraint *tableTopConstraint; // @synthesize tableTopConstraint;
@property(nonatomic) __weak UILabel *basicUserMessageInfoLabel; // @synthesize basicUserMessageInfoLabel;
@property(nonatomic) __weak UILabel *basicUserMessageTitleLabel; // @synthesize basicUserMessageTitleLabel;
@property(nonatomic) __weak UIView *basicUserView; // @synthesize basicUserView;
@property(nonatomic) __weak WMPReorderTableView *tableView; // @synthesize tableView;

@end
